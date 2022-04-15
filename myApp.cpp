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
    painter.translate(QWidget::width()/2,QWidget::height()/2);
    timer->tick();
    //while (true) {
        //if (timer->getduration() >= 0.1) {
            b->rotate(0.05);
            b->show(&painter);

            b1->rotate(0.01);
            b1->show(&painter);

           // b->h++;


            update();
         //   break;
        //}
    //}


}
