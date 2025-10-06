/********************************************************************************
** Form generated from reading UI file 'MIDIWithGui.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MIDIWITHGUI_H
#define UI_MIDIWITHGUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MIDIWithGuiClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MIDIWithGuiClass)
    {
        if (MIDIWithGuiClass->objectName().isEmpty())
            MIDIWithGuiClass->setObjectName("MIDIWithGuiClass");
        MIDIWithGuiClass->resize(600, 400);
        menuBar = new QMenuBar(MIDIWithGuiClass);
        menuBar->setObjectName("menuBar");
        MIDIWithGuiClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MIDIWithGuiClass);
        mainToolBar->setObjectName("mainToolBar");
        MIDIWithGuiClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(MIDIWithGuiClass);
        centralWidget->setObjectName("centralWidget");
        MIDIWithGuiClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MIDIWithGuiClass);
        statusBar->setObjectName("statusBar");
        MIDIWithGuiClass->setStatusBar(statusBar);

        retranslateUi(MIDIWithGuiClass);

        QMetaObject::connectSlotsByName(MIDIWithGuiClass);
    } // setupUi

    void retranslateUi(QMainWindow *MIDIWithGuiClass)
    {
        MIDIWithGuiClass->setWindowTitle(QCoreApplication::translate("MIDIWithGuiClass", "MIDIWithGui", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MIDIWithGuiClass: public Ui_MIDIWithGuiClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MIDIWITHGUI_H
