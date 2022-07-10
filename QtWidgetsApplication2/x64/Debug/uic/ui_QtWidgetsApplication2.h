/********************************************************************************
** Form generated from reading UI file 'QtWidgetsApplication2.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTWIDGETSAPPLICATION2_H
#define UI_QTWIDGETSAPPLICATION2_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtWidgetsApplication2Class
{
public:
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionHow_To_Work_with_PP;
    QWidget *centralWidget;
    QPushButton *circleButton;
    QPushButton *rectButton;
    QPushButton *colorButton;
    QGraphicsView *graphicsView;
    QWidget *colorWidget;
    QLabel *help_text1;
    QLabel *help_arrow1;
    QLabel *help_text_2;
    QLabel *help_arrow_2;
    QLabel *help_text_3;
    QMenuBar *menuBar;
    QMenu *menuMenu;
    QMenu *menuHelp;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QtWidgetsApplication2Class)
    {
        if (QtWidgetsApplication2Class->objectName().isEmpty())
            QtWidgetsApplication2Class->setObjectName(QString::fromUtf8("QtWidgetsApplication2Class"));
        QtWidgetsApplication2Class->resize(846, 439);
        actionOpen = new QAction(QtWidgetsApplication2Class);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        actionSave = new QAction(QtWidgetsApplication2Class);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        actionHow_To_Work_with_PP = new QAction(QtWidgetsApplication2Class);
        actionHow_To_Work_with_PP->setObjectName(QString::fromUtf8("actionHow_To_Work_with_PP"));
        centralWidget = new QWidget(QtWidgetsApplication2Class);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        circleButton = new QPushButton(centralWidget);
        circleButton->setObjectName(QString::fromUtf8("circleButton"));
        circleButton->setGeometry(QRect(0, 0, 41, 41));
        QFont font;
        font.setPointSize(22);
        font.setBold(true);
        font.setWeight(75);
        circleButton->setFont(font);
        rectButton = new QPushButton(centralWidget);
        rectButton->setObjectName(QString::fromUtf8("rectButton"));
        rectButton->setGeometry(QRect(40, 0, 41, 41));
        rectButton->setFont(font);
        colorButton = new QPushButton(centralWidget);
        colorButton->setObjectName(QString::fromUtf8("colorButton"));
        colorButton->setGeometry(QRect(80, 0, 91, 41));
        QFont font1;
        font1.setPointSize(11);
        colorButton->setFont(font1);
        graphicsView = new QGraphicsView(centralWidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(0, 40, 841, 341));
        colorWidget = new QWidget(centralWidget);
        colorWidget->setObjectName(QString::fromUtf8("colorWidget"));
        colorWidget->setGeometry(QRect(800, 10, 21, 21));
        help_text1 = new QLabel(centralWidget);
        help_text1->setObjectName(QString::fromUtf8("help_text1"));
        help_text1->setGeometry(QRect(230, 10, 371, 16));
        help_text1->setVisible(false);
        QFont font2;
        font2.setPointSize(10);
        help_text1->setFont(font2);
        help_arrow1 = new QLabel(centralWidget);
        help_arrow1->setObjectName(QString::fromUtf8("help_arrow1"));
        help_arrow1->setGeometry(QRect(180, 0, 61, 31));
        help_arrow1->setVisible(false);
        QFont font3;
        font3.setPointSize(26);
        font3.setBold(true);
        font3.setWeight(75);
        help_arrow1->setFont(font3);
        help_text_2 = new QLabel(centralWidget);
        help_text_2->setObjectName(QString::fromUtf8("help_text_2"));
        help_text_2->setGeometry(QRect(10, 90, 421, 21));
        help_text_2->setFont(font2);
        help_text_2->setVisible(false);
        help_arrow_2 = new QLabel(centralWidget);
        help_arrow_2->setObjectName(QString::fromUtf8("help_arrow_2"));
        help_arrow_2->setGeometry(QRect(30, 50, 61, 31));
        help_arrow_2->setFont(font3);
        help_arrow_2->setVisible(false);
        help_text_3 = new QLabel(centralWidget);
        help_text_3->setObjectName(QString::fromUtf8("help_text_3"));
        help_text_3->setGeometry(QRect(300, 210, 421, 21));
        help_text_3->setFont(font2);
        help_text_3->setVisible(false);
        QtWidgetsApplication2Class->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(QtWidgetsApplication2Class);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 846, 26));
        menuMenu = new QMenu(menuBar);
        menuMenu->setObjectName(QString::fromUtf8("menuMenu"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        QtWidgetsApplication2Class->setMenuBar(menuBar);
        statusBar = new QStatusBar(QtWidgetsApplication2Class);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        QtWidgetsApplication2Class->setStatusBar(statusBar);

        menuBar->addAction(menuMenu->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuMenu->addAction(actionOpen);
        menuMenu->addAction(actionSave);
        menuHelp->addAction(actionHow_To_Work_with_PP);

        retranslateUi(QtWidgetsApplication2Class);

        QMetaObject::connectSlotsByName(QtWidgetsApplication2Class);
    } // setupUi

    void retranslateUi(QMainWindow *QtWidgetsApplication2Class)
    {
        QtWidgetsApplication2Class->setWindowTitle(QApplication::translate("QtWidgetsApplication2Class", "Primitive Paint", nullptr));
        actionOpen->setText(QApplication::translate("QtWidgetsApplication2Class", "Open", nullptr));
        actionSave->setText(QApplication::translate("QtWidgetsApplication2Class", "Save", nullptr));
        actionHow_To_Work_with_PP->setText(QApplication::translate("QtWidgetsApplication2Class", "How To Work with PP", nullptr));
        circleButton->setText(QApplication::translate("QtWidgetsApplication2Class", "\342\227\213", nullptr));
        rectButton->setText(QApplication::translate("QtWidgetsApplication2Class", "\342\226\240", nullptr));
        colorButton->setText(QApplication::translate("QtWidgetsApplication2Class", "Set Color", nullptr));
        help_text1->setText(QApplication::translate("QtWidgetsApplication2Class", "1. Click on the button \"Set Color\" to choose color.", nullptr));
        help_arrow1->setText(QApplication::translate("QtWidgetsApplication2Class", "\342\206\220", nullptr));
        help_text_2->setText(QApplication::translate("QtWidgetsApplication2Class", "2. Click on the one from two buttons to choose a figure.", nullptr));
        help_arrow_2->setText(QApplication::translate("QtWidgetsApplication2Class", "\342\206\221", nullptr));
        help_text_3->setText(QApplication::translate("QtWidgetsApplication2Class", "3. Click anywhere on the field.", nullptr));
        menuMenu->setTitle(QApplication::translate("QtWidgetsApplication2Class", "Menu", nullptr));
        menuHelp->setTitle(QApplication::translate("QtWidgetsApplication2Class", "Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QtWidgetsApplication2Class: public Ui_QtWidgetsApplication2Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTWIDGETSAPPLICATION2_H
