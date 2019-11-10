#include "GrafoArtic.h"

void SubirNodoSupermercado (string pNombreArchivo)
{
    ifstream in(pNombreArchivo);
    if (in.is_open())
    {
        std::vector<std::string> content;
        for (std::string line; std::getline(in, line); )
        {
            content.push_back(line);
        }
        in.close();
        std::iter_swap(content.begin(), content.begin() + 3);

        ofstream out("Ciudades temporales.txt");
        if (out.is_open()) {
            for (auto i : content)
            {
                out << i << std::endl;
            }
            out.close();
        }
    }
}


Graph::Graph(int V)
{
    this->V = V;
    adj = new list<int>[V];
    numeros = new int[V];
    nombres = new string [V];
}

int Graph::encontrarNodo (int numero){
    for (int i = 0; i <= this->V-1;i++){
        if (this->numeros[i]==numero){
            return i;
        }
    }
    return -1;
}

void Graph::cargarRelaciones(string pNombreArchivo) {
    string numero1;
    string numero2;
    string linea;
    ifstream archivo (pNombreArchivo);
    while (getline(archivo, linea)){
        istringstream lineaActual (linea);
        getline(lineaActual,numero1,';');
        getline(lineaActual,numero2,';');
        int primerNodo = encontrarNodo(stoi(numero1));
        int segundoNodo = encontrarNodo(stoi(numero2));
        if (primerNodo == -1 || segundoNodo == -1){
        } else {
          this->addEdge(primerNodo,segundoNodo);
        }
    }
    archivo.close();
}

int contarNodos (string pNombreArchivo, arbolPas &repetidos){
    arbolPas numeros = arbolPas();
    string numero;
    int i = -1;
    int contLineas = 1;
    string linea;
    ifstream archivo (pNombreArchivo);
    while (getline(archivo, linea)){
        istringstream lineaActual (linea);
        getline(lineaActual,numero,';');
        bool temp = false;
        numeros.encontrarPasillo(temp,numeros.raiz,numero);
        if (!temp){
            numeros.InsertaBinario(numeros.raiz,numero,"");
            i++;
            contLineas++;
        }else{
            repetidos.InsertaBinario(repetidos.raiz,to_string(contLineas),"");
            temp = false;
            contLineas++;
        }
    }
    archivo.close();
    return i;
}

Graph montarGrafo(string pNombreArchivo, string pNombreRelaciones)
{
    SubirNodoSupermercado(pNombreArchivo);
    arbolPas repetidos = arbolPas ();
    int nodosGrafo = contarNodos("Ciudades temporales.txt",repetidos);
    Graph nuevoGrafo = Graph (nodosGrafo+1);
    nuevoGrafo.rellenarDatos("Ciudades temporales.txt",repetidos);
    nuevoGrafo.cargarRelaciones(pNombreRelaciones);
    remove("Ciudades temporales.txt");
    return nuevoGrafo;
}
void Graph::rellenarDatos (string pNombreArchivo, arbolPas repetidos){
    string nombre;
    string numero;
    string linea;
    ifstream archivo (pNombreArchivo);
    int i = -1;
    int contNodos = 1;
    while (getline(archivo, linea)){
        istringstream lineaActual (linea);
        getline(lineaActual,numero,';');
        getline(lineaActual,nombre,';');
        bool lineaInvalida = false;
        repetidos.encontrarPasillo(lineaInvalida,repetidos.raiz,to_string(contNodos));
        if (lineaInvalida){
            lineaInvalida = false;
        }
        else {
            i++;
            this->numeros[i] = stoi (numero);
            this->nombres[i] = nombre;
        }
        contNodos++;
    }
    archivo.close();
}

void Graph::addEdge(int v, int w)
{
    adj[v].push_back(w);
    adj[w].push_back(v);  // Note: the graph is undirected
}

// A recursive function that find articulation points using DFS traversal
// u --> The vertex to be visited next
// visited[] --> keeps tract of visited vertices
// disc[] --> Stores discovery times of visited vertices
// parent[] --> Stores parent vertices in DFS tree
// ap[] --> Store articulation points
void Graph::APUtil(int u, bool visited[], int disc[],
                   int low[], int parent[], bool ap[], string razones[], string comparaciones [])
{
    // A static variable is used for simplicity, we can avoid use of static
    // variable by passing a pointer.
    static int time = 0;

    // Count of children in DFS Tree
    int children = 0;

    // Mark the current node as visited
    visited[u] = true;

    // Initialize discovery time and low value
    disc[u] = low[u] = ++time;

    // Go through all vertices adjacent to this
    list<int>::iterator i;
    for (i = adj[u].begin(); i != adj[u].end(); ++i)
    {
        int v = *i;  // v is current adjacent of u

        // If v is not visited yet, then make it a child of u
        // in DFS tree and recur for it
        if (!visited[v])
        {
            children++;
            parent[v] = u;
            APUtil(v, visited, disc, low, parent, ap,razones,comparaciones);

            // Check if the subtree rooted with v has a connection to
            // one of the ancestors of u
            low[u]  = min(low[u], low[v]);
            if (disc[u]!=1)
                comparaciones[u].append(" " + to_string(low[v]) + " >= " + to_string(disc[u]) + "?");
            else
                comparaciones[u] = "Raiz con " + to_string(children) + " hijo(s)";

            // u is an articulation point in following cases

            // (1) u is root of DFS tree and has two or more chilren.
            if (parent[u] == NIL && children > 1){
               ap[u] = true;
               comparaciones[u].append(" Nodo raiz con al menos dos hijos, PT");
               razones[u] = "Nodo raiz con al menos dos hijos";
            }

            // (2) If u is not root and low value of one of its child is more
            // than discovery value of u.
            if (parent[u] != NIL && low[v] >= disc[u]){
               ap[u] = true;
               comparaciones[u].append(" Alguno de sus hijos posee un bajor mayor o igual a su num, PT");
               razones[u] = to_string(low[v]) + " >= " + to_string(disc[u]);
            }
        }

        // Update low value of u for parent function calls.
        else if (v != parent[u])
            low[u]  = min(low[u], disc[v]);
    }
}

// The function to do DFS traversal. It uses recursive function APUtil()
string Graph::AP()
{
    string comparacionesS = "";
    string result = "";
    // Mark all the vertices as not visited
    bool *visited = new bool[V];
    int *disc = new int[V];
    int *low = new int[V];
    int *parent = new int[V];
    bool *ap = new bool[V]; // To store articulation points
    string *razones = new string[V];
    string *comparaciones = new string[V];

    // Initialize parent and visited, and ap(articulation point) arrays
    for (int i = 0; i < V; i++)
    {
        parent[i] = NIL;
        visited[i] = false;
        ap[i] = false;
        razones[i] = "";
    }

    // Call the recursive helper function to find articulation points
    // in DFS tree rooted with vertex 'i'
    for (int i = 0; i < V; i++)
        if (visited[i] == false)
            APUtil(i, visited, disc, low, parent, ap, razones, comparaciones);

    // Now ap[] contains articulation points, print them
    result.append("Puntos de articulacion: ");
    result.append("\n");
    for (int i = 0; i < V; i++){
        comparacionesS.append(to_string(this->numeros[i]));
        comparacionesS.append("//");
        comparacionesS.append(this->nombres[i]);
        comparacionesS.append("     ");
        comparacionesS.append(comparaciones[i]);
        if (comparaciones[i]=="")
            comparacionesS.append("Nodo hoja");
        comparacionesS.append("\n");
        if (ap[i] == true){
            result.append(to_string(this->numeros[i]));
            result.append("//");
            result.append(this->nombres[i]);
            result.append("\n");
        }
    }
    ofstream out("Comparaciones (Ptos de articulacion).txt",ios::out | ios::trunc);
    if (out.is_open()) {
         out << comparacionesS;
     }
    out.close();
    return result;
}

void Graph::DFSUtil(int v, bool visited[], string &result)
{
    // Mark the current node as visited and
    // print it
    visited[v] = true;
    result.append(to_string (this->numeros[v]));
    result.append("//");
    result.append(this->nombres[v]);
    result.append(" -> ");
    // Recur for all the vertices adjacent
    // to this vertex
    list<int>::iterator i;
    for (i = adj[v].begin(); i != adj[v].end(); ++i)
        if (!visited[*i])
            DFSUtil(*i, visited, result);
}

// DFS traversal of the vertices reachable from v.
// It uses recursive DFSUtil()
string Graph::Profundidad()
{
    int v = 0;
    string result = "Recorrido de profundidad: \n";
    // Mark all the vertices as not visited
    bool *visited = new bool[V];
    for (int i = 0; i < V; i++)
        visited[i] = false;

    // Call the recursive helper function
    // to print DFS traversal
    DFSUtil(v, visited, result);
    result = result.substr(0, result.length()-3);
    ofstream out("Profundidad.txt");
    if (out.is_open()) {
        out<<result;
        out.close();
    }
    return result;
}

string Graph::Anchura()
{
    string result = "Recorrido de anchura: \n";
    int s = 0;
    // Mark all the vertices as not visited
    bool *visited = new bool[V];
    for(int i = 0; i < V; i++)
        visited[i] = false;

    // Create a queue for BFS
    list<int> queue;

    // Mark the current node as visited and enqueue it
    visited[s] = true;
    queue.push_back(s);

    // 'i' will be used to get all adjacent
    // vertices of a vertex
    list<int>::iterator i;

    while(!queue.empty())
    {
        // Dequeue a vertex from queue and print it
        s = queue.front();
        result.append(to_string (this->numeros[s]));
        result.append("//");
        result.append(this->nombres[s]);
        result.append(" -> ");
        queue.pop_front();
        // Get all adjacent vertices of the dequeued
        // vertex s. If a adjacent has not been visited,
        // then mark it visited and enqueue it
        for (i = adj[s].begin(); i != adj[s].end(); ++i)
        {
            if (!visited[*i])
            {
                visited[*i] = true;
                queue.push_back(*i);
            }
        }
    }
    result = result.substr(0, result.length()-3);
    ofstream out("Anchura.txt");
    if (out.is_open()) {
        out<<result;
        out.close();
    }
    return result;
}


