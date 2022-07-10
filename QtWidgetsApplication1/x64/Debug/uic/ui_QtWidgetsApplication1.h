/********************************************************************************
** Form generated from reading UI file 'QtWidgetsApplication1.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTWIDGETSAPPLICATION1_H
#define UI_QTWIDGETSAPPLICATION1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtWidgetsApplication1Class
{
public:
    QWidget *centralWidget;
    QLabel *mainLabel;
    QTextEdit *personEdit;
    QTextEdit *phoneEdit;
    QPushButton *addButton;
    QPushButton *deleteButton;
    QPushButton *findButton;
    QPushButton *showAllButton;
    QLabel *personLabel;
    QLabel *phoneLabel;
    QTextEdit *textEdit;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QtWidgetsApplication1Class)
    {
        if (QtWidgetsApplication1Class->objectName().isEmpty())
            QtWidgetsApplication1Class->setObjectName(QString::fromUtf8("QtWidgetsApplication1Class"));
        QtWidgetsApplication1Class->resize(755, 437);
        centralWidget = new QWidget(QtWidgetsApplication1Class);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        mainLabel = new QLabel(centralWidget);
        mainLabel->setObjectName(QString::fromUtf8("mainLabel"));
        mainLabel->setGeometry(QRect(300, 10, 171, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("Yu Gothic UI Semibold"));
        font.setPointSize(18);
        font.setBold(true);
        font.setWeight(75);
        mainLabel->setFont(font);
        personEdit = new QTextEdit(centralWidget);
        personEdit->setObjectName(QString::fromUtf8("personEdit"));
        personEdit->setGeometry(QRect(80, 110, 171, 41));
        phoneEdit = new QTextEdit(centralWidget);
        phoneEdit->setObjectName(QString::fromUtf8("phoneEdit"));
        phoneEdit->setGeometry(QRect(80, 210, 171, 41));
        addButton = new QPushButton(centralWidget);
        addButton->setObjectName(QString::fromUtf8("addButton"));
        addButton->setGeometry(QRect(40, 270, 93, 28));
        deleteButton = new QPushButton(centralWidget);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));
        deleteButton->setGeometry(QRect(210, 270, 93, 28));
        findButton = new QPushButton(centralWidget);
        findButton->setObjectName(QString::fromUtf8("findButton"));
        findButton->setGeometry(QRect(40, 320, 93, 28));
        showAllButton = new QPushButton(centralWidget);
        showAllButton->setObjectName(QString::fromUtf8("showAllButton"));
        showAllButton->setGeometry(QRect(210, 320, 93, 28));
        personLabel = new QLabel(centralWidget);
        personLabel->setObjectName(QString::fromUtf8("personLabel"));
        personLabel->setGeometry(QRect(130, 80, 71, 21));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Yu Gothic UI Semibold"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        personLabel->setFont(font1);
        phoneLabel = new QLabel(centralWidget);
        phoneLabel->setObjectName(QString::fromUtf8("phoneLabel"));
        phoneLabel->setGeometry(QRect(100, 180, 151, 21));
        phoneLabel->setFont(font1);
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setEnabled(true);
        textEdit->setGeometry(QRect(420, 80, 301, 281));
        textEdit->setFont(font1);
        textEdit->setReadOnly(true);
        QtWidgetsApplication1Class->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(QtWidgetsApplication1Class);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 755, 26));
        QtWidgetsApplication1Class->setMenuBar(menuBar);
        statusBar = new QStatusBar(QtWidgetsApplication1Class);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        QtWidgetsApplication1Class->setStatusBar(statusBar);

        retranslateUi(QtWidgetsApplication1Class);

        QMetaObject::connectSlotsByName(QtWidgetsApplication1Class);
    } // setupUi

    void retranslateUi(QMainWindow *QtWidgetsApplication1Class)
    {
        QtWidgetsApplication1Class->setWindowTitle(QApplication::translate("QtWidgetsApplication1Class", "QtWidgetsApplication1", nullptr));
        mainLabel->setText(QApplication::translate("QtWidgetsApplication1Class", "Phone Book", nullptr));
        addButton->setText(QApplication::translate("QtWidgetsApplication1Class", "Add", nullptr));
        deleteButton->setText(QApplication::translate("QtWidgetsApplication1Class", "Delete", nullptr));
        findButton->setText(QApplication::translate("QtWidgetsApplication1Class", "Find", nullptr));
        showAllButton->setText(QApplication::translate("QtWidgetsApplication1Class", "Show All", nullptr));
        personLabel->setText(QApplication::translate("QtWidgetsApplication1Class", "Person", nullptr));
        phoneLabel->setText(QApplication::translate("QtWidgetsApplication1Class", "Phone Number", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QtWidgetsApplication1Class: public Ui_QtWidgetsApplication1Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTWIDGETSAPPLICATION1_H
