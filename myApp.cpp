#include "myApp.h"



void myApp::mousePressEvent(QMouseEvent* event)
{
    if (event->button() == Qt::LeftButton) std::cout << " Mouse Pressed" << std::endl;

}

void myApp::mouseMoveEvent(QMouseEvent *event) {

}

void myApp::keyPressEvent(QKeyEvent *event) {

    if (event->key() == Qt::Key_D) std::cout << " Key D Pressed" << std::endl;

}

void myApp::paintEvent(QPaintEvent *event) {
    QPainter painter(this);
    b->show(&painter);
    b->h++;
    painter.drawLine(10,10,100,100);
    update();
}
