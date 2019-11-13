/********************************************************************************
** Form generated from reading UI file 'ventana2.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VENTANA2_H
#define UI_VENTANA2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ventana2
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ventana2)
    {
        if (ventana2->objectName().isEmpty())
            ventana2->setObjectName(QString::fromUtf8("ventana2"));
        ventana2->resize(800, 600);
        centralwidget = new QWidget(ventana2);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(300, 270, 93, 28));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(280, 220, 113, 22));
        ventana2->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ventana2);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        ventana2->setMenuBar(menubar);
        statusbar = new QStatusBar(ventana2);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        ventana2->setStatusBar(statusbar);

        retranslateUi(ventana2);

        QMetaObject::connectSlotsByName(ventana2);
    } // setupUi

    void retranslateUi(QMainWindow *ventana2)
    {
        ventana2->setWindowTitle(QApplication::translate("ventana2", "MainWindow", nullptr));
        pushButton->setText(QApplication::translate("ventana2", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ventana2: public Ui_ventana2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VENTANA2_H
