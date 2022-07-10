#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QtWidgetsApplication1.h"
#include <QtCore>
#include <QtGui>
#include <QTextBrowser>

class QtWidgetsApplication1 : public QMainWindow
{
    Q_OBJECT

public:
    QtWidgetsApplication1(QWidget* parent = nullptr);
    ~QtWidgetsApplication1();
private:
    Ui::QtWidgetsApplication1Class ui;
    std::map <std::string, std::list<std::string>> nums{};
private slots:
    void on_showAllButton_clicked();
    void on_deleteButton_clicked();
    void on_addButton_clicked();
    void on_findButton_clicked();
};