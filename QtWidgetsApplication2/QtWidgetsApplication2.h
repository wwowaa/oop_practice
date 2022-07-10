#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QtWidgetsApplication2.h"

class QtWidgetsApplication2 : public QMainWindow
{
    Q_OBJECT

public:
    QtWidgetsApplication2(QWidget *parent = nullptr);
    ~QtWidgetsApplication2();
    virtual void mousePressEvent(QMouseEvent* e);
private slots:
    void on_rectButton_clicked();
    void on_circleButton_clicked();
    void on_colorButton_clicked();
    void on_actionOpen_triggered();
    void on_actionSave_triggered();
    void on_actionHow_To_Work_with_PP_triggered();
private:
    Ui::QtWidgetsApplication2Class ui;
    QGraphicsScene* scene;
    QPixmap image;
    QColor color;
    std::string whatToDraw;
    void closeTips();
};
