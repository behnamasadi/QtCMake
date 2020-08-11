/********************************************************************************
** Form generated from reading UI file 'qtdemo.ui'
**
** Created: Wed Nov 21 02:31:10 2012
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTDEMO_H
#define UI_QTDEMO_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_qtdemoClass
{
public:
    QAction *actionChange_the_text;
    QWidget *centralwidget;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_2;
    QLabel *lblMouse;
    QGroupBox *groupBox;
    QLabel *lblMouse_Current_Position;
    QLabel *lblMouse_Current_Event;
    QPushButton *btnSignalCallingSignal;
    QMenuBar *menubar;
    QMenu *menuFile;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *qtdemoClass)
    {
        if (qtdemoClass->objectName().isEmpty())
            qtdemoClass->setObjectName(QString::fromUtf8("qtdemoClass"));
        qtdemoClass->resize(800, 600);
        actionChange_the_text = new QAction(qtdemoClass);
        actionChange_the_text->setObjectName(QString::fromUtf8("actionChange_the_text"));
        centralwidget = new QWidget(qtdemoClass);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(50, 80, 113, 27));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(180, 80, 97, 27));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(440, 150, 97, 27));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 150, 409, 29));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEdit_2 = new QLineEdit(layoutWidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        horizontalLayout->addWidget(lineEdit_2);

        lblMouse = new QLabel(centralwidget);
        lblMouse->setObjectName(QString::fromUtf8("lblMouse"));
        lblMouse->setGeometry(QRect(60, 230, 261, 211));
        lblMouse->setMouseTracking(true);
        lblMouse->setFocusPolicy(Qt::ClickFocus);
        lblMouse->setFrameShape(QFrame::Box);
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(370, 240, 301, 201));
        groupBox->setFlat(false);
        groupBox->setCheckable(false);
        lblMouse_Current_Position = new QLabel(groupBox);
        lblMouse_Current_Position->setObjectName(QString::fromUtf8("lblMouse_Current_Position"));
        lblMouse_Current_Position->setGeometry(QRect(0, 40, 291, 31));
        lblMouse_Current_Event = new QLabel(groupBox);
        lblMouse_Current_Event->setObjectName(QString::fromUtf8("lblMouse_Current_Event"));
        lblMouse_Current_Event->setGeometry(QRect(0, 100, 231, 17));
        btnSignalCallingSignal = new QPushButton(centralwidget);
        btnSignalCallingSignal->setObjectName(QString::fromUtf8("btnSignalCallingSignal"));
        btnSignalCallingSignal->setGeometry(QRect(560, 150, 97, 27));
        qtdemoClass->setCentralWidget(centralwidget);
        menubar = new QMenuBar(qtdemoClass);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 25));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        qtdemoClass->setMenuBar(menubar);
        statusbar = new QStatusBar(qtdemoClass);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        qtdemoClass->setStatusBar(statusbar);
        toolBar = new QToolBar(qtdemoClass);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        qtdemoClass->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuFile->menuAction());
        menuFile->addAction(actionChange_the_text);
        toolBar->addSeparator();

        retranslateUi(qtdemoClass);

        QMetaObject::connectSlotsByName(qtdemoClass);
    } // setupUi

    void retranslateUi(QMainWindow *qtdemoClass)
    {
        qtdemoClass->setWindowTitle(QApplication::translate("qtdemoClass", "MainWindow", 0, QApplication::UnicodeUTF8));
        actionChange_the_text->setText(QApplication::translate("qtdemoClass", "Change the text", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("qtdemoClass", "PushButton", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("qtdemoClass", "PushButton", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("qtdemoClass", "shortcut is ctrl+I to change the text ", 0, QApplication::UnicodeUTF8));
        lblMouse->setText(QApplication::translate("qtdemoClass", "TextLabel", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("qtdemoClass", "Mouse Event", 0, QApplication::UnicodeUTF8));
        lblMouse_Current_Position->setText(QApplication::translate("qtdemoClass", "X=0, Y=0", 0, QApplication::UnicodeUTF8));
        lblMouse_Current_Event->setText(QApplication::translate("qtdemoClass", "Mouse Current Event", 0, QApplication::UnicodeUTF8));
        btnSignalCallingSignal->setText(QApplication::translate("qtdemoClass", "PushButton", 0, QApplication::UnicodeUTF8));
        menuFile->setTitle(QApplication::translate("qtdemoClass", "File", 0, QApplication::UnicodeUTF8));
        toolBar->setWindowTitle(QApplication::translate("qtdemoClass", "toolBar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class qtdemoClass: public Ui_qtdemoClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTDEMO_H
