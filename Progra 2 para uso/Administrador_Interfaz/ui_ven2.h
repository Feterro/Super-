/********************************************************************************
** Form generated from reading UI file 'ven2.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VEN2_H
#define UI_VEN2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ven2
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ven2)
    {
        if (ven2->objectName().isEmpty())
            ven2->setObjectName(QString::fromUtf8("ven2"));
        ven2->resize(800, 600);
        menubar = new QMenuBar(ven2);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        ven2->setMenuBar(menubar);
        centralwidget = new QWidget(ven2);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        ven2->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(ven2);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        ven2->setStatusBar(statusbar);

        retranslateUi(ven2);

        QMetaObject::connectSlotsByName(ven2);
    } // setupUi

    void retranslateUi(QMainWindow *ven2)
    {
        ven2->setWindowTitle(QApplication::translate("ven2", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ven2: public Ui_ven2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VEN2_H
