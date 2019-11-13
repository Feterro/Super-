#include "ven2.h"
#include "ui_ven2.h"

ven2::ven2(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ven2)
{
    ui->setupUi(this);
}

ven2::~ven2()
{
    delete ui;
}
