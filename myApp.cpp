#include <QPainterPath>
#include "myApp.h"



void myApp::mousePressEvent(QMouseEvent* event)
{
    if (event->button() == Qt::LeftButton) std::cout << "Mouse " << std::endl;

}

void myApp::mouseMoveEvent(QMouseEvent *event) {

}

void myApp::keyPressEvent(QKeyEvent *event) {

    if (event->key() == Qt::Key_D) {std::cout << a << std::endl;a+=10;}

}

void myApp::paintEvent(QPaintEvent *event) {
    QPainter painter(this);
    painter.translate((int)QWidget::width()/2,(int)QWidget::height()/2);
    painter.rotate(-90);
    s->draw(&painter);
    s->rotate('A');







    update();


}
