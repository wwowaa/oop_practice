#include "QtWidgetsApplication2.h"
#include <QPainter>
#include <QGraphicsScene>
#include <QtCore>
#include <QtGui>
#include <qgraphicsitem.h>
#include <QColorDialog>
#include <QFileDialog>
#include <QDebug>

QtWidgetsApplication2::QtWidgetsApplication2(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);

    color.setRgb(200, 2, 0);
    QPalette pal = ui.colorWidget->palette();
    pal.setColor(QPalette::Background, color);
    ui.colorWidget->setAutoFillBackground(true);
    ui.colorWidget->setPalette(pal);

    image.load("white.png");
    scene = new QGraphicsScene(this);
    scene->addPixmap(image);
    scene->setSceneRect(image.rect());
    ui.graphicsView->setScene(scene);

    whatToDraw = " ";
}

QtWidgetsApplication2::~QtWidgetsApplication2()
{}

void QtWidgetsApplication2::on_rectButton_clicked() {
    whatToDraw = "rect";
}
void QtWidgetsApplication2::on_circleButton_clicked() {
    whatToDraw = "ellipse";
}
void QtWidgetsApplication2::on_colorButton_clicked() {
    color = QColorDialog::getColor(color, this);
    QPalette pal = ui.colorWidget->palette();
    pal.setColor(QPalette::Background, color);
    ui.colorWidget->setAutoFillBackground(true);
    ui.colorWidget->setPalette(pal);
}
void QtWidgetsApplication2::mousePressEvent(QMouseEvent* e) {
    QPoint remap = ui.graphicsView->mapFromParent(e->pos());
    if (ui.graphicsView->rect().contains(remap)) {
        QPointF mousePoint = ui.graphicsView->mapToScene(remap);
        if (whatToDraw == "rect") {
            QGraphicsRectItem* el = new QGraphicsRectItem(mousePoint.x()-50, mousePoint.y()-50, 100, 100, 0);
            el->setBrush(color);
            el->setPen(QPen(color));
            scene->addItem(el);
            whatToDraw = " ";
            
        }
        if (whatToDraw == "ellipse") {
            QGraphicsEllipseItem* el = new QGraphicsEllipseItem(mousePoint.x()-25, mousePoint.y()-50, 100, 100, 0);
            el->setBrush(color);
            el->setPen(QPen(color));
            scene->addItem(el);
            whatToDraw = " ";
        }
        closeTips();
    }
}
void QtWidgetsApplication2::on_actionOpen_triggered() {
    QString fileName = QFileDialog::getOpenFileName(this, "Open File", "C://", "Primitive pictures (*.png)");
    image.load(fileName);
    scene = new QGraphicsScene(this);
    scene->addPixmap(image);
    scene->setSceneRect(image.rect());
    ui.graphicsView->setScene(scene);
}
void QtWidgetsApplication2::on_actionSave_triggered() {
    scene->clearSelection();
    scene->setSceneRect(scene->itemsBoundingRect());
    QImage image(scene->sceneRect().size().toSize(), QImage::Format_ARGB32);
    image.fill(Qt::transparent);
    QPainter painter(&image);
    scene->render(&painter);
    QString fileName = QFileDialog::getSaveFileName(this, "Open File", "C://", "Primitive pictures (*.png)");
    image.save(fileName);
}
void QtWidgetsApplication2::on_actionHow_To_Work_with_PP_triggered() {
    ui.help_text1->setVisible(true);
    ui.help_arrow1->setVisible(true);
    ui.help_text_2->setVisible(true);
    ui.help_arrow_2->setVisible(true);
    ui.help_text_3->setVisible(true);
}
void QtWidgetsApplication2::closeTips() {
    ui.help_text1->setVisible(false);
    ui.help_arrow1->setVisible(false);
    ui.help_text_2->setVisible(false);
    ui.help_arrow_2->setVisible(false);
    ui.help_text_3->setVisible(false);
}