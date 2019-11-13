#ifndef VEN2_H
#define VEN2_H

#include <QMainWindow>

namespace Ui {
class ven2;
}

class ven2 : public QMainWindow
{
    Q_OBJECT

public:
    explicit ven2(QWidget *parent = nullptr);
    ~ven2();

private:
    Ui::ven2 *ui;
};

#endif // VEN2_H
