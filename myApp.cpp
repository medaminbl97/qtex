#include <QPainterPath>
#include "myApp.h"



void myApp::mousePressEvent(QMouseEvent* event)
{
    if (event->button() == Qt::LeftButton) std::cout << "Mouse " << std::endl;

}

void myApp::mouseMoveEvent(QMouseEvent *event) {

}

void myApp::keyPressEvent(QKeyEvent *event) {

    if (event->key() == Qt::Key_A) s->arotation = !s->arotation;
    if (event->key() == Qt::Key_X) s->xrotation = !s->xrotation;
    if (event->key() == Qt::Key_Y) s->yrotation = !s->yrotation;
    if (event->key() == Qt::Key_Z) s->zrotation = !s->zrotation;

}

void myApp::paintEvent(QPaintEvent *event) {
    QPainter painter(this);
    painter.translate((int)QWidget::width()/2,(int)QWidget::height()/2);
    painter.rotate(-90);
    s->draw(&painter);
    s->rotate('A');
    s->rotate('X');
    s->rotate('Y');
    s->rotate('Z');







    update();


}
