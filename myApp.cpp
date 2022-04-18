#include <QPainterPath>
#include "myApp.h"



void myApp::mousePressEvent(QMouseEvent* event)
{
    if (event->button() == Qt::LeftButton) b = 255;

}

void myApp::mouseMoveEvent(QMouseEvent *event) {

}

void myApp::keyPressEvent(QKeyEvent *event) {

    if (event->key() == Qt::Key_D) {std::cout << a << std::endl;a+=10;}

}

void myApp::paintEvent(QPaintEvent *event) {

    //path.addRect(20, 20, 60, 60);

   QPolygon p;
   p << QPoint(0,0);
   p << QPoint(100,100);
   p << QPoint(100,-100);



    QPainter painter(this);
    painter.translate((int)QWidget::width()/2,(int)QWidget::height()/2);
    painter.rotate(-90);
    /*painter.fillRect(0, 0, 100, 100, Qt::white);
    painter.setPen(QPen(QColor(79, 106, 25), 1, Qt::SolidLine,
                        Qt::FlatCap, Qt::MiterJoin));*/
    painter.setBrush(QColor(a, b, 0));

    painter.drawPolygon(p);


    update();


}
