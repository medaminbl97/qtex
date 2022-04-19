#pragma once
#include <iostream>
#include <QApplication>
#include <QWindow>
#include<QWidget>
#include <QEvent>
#include <QKeyEvent>
#include <QMouseEvent>
#include <QPaintEvent>
#include <QPainter>
#include "Box.h"
#include "myTimer.h"
#include "mtl.h"


class myApp : public QWidget {
    Q_OBJECT
private:
    mytimer *timer;
    int a = 0, b = 0;
    //Box* box;
    vertex vs[3];
    matrx *m;
public:
    explicit myApp(const std::string& title = "myApp",int width = 600 , int hight = 300): QWidget(nullptr),timer(new mytimer) { setWindowTitle(title.c_str());
        setMinimumSize(width,hight);
        resize(900,600);
        setPalette(QPalette(QColor(Qt::white)));
        //box = new Box();
        vs[0]=vertex(100,0,0);
        vs[1]=vertex(0,100,0);
        vs[2]=vs[0]*vs[1]/100;

        m = new matrx(vs,3);
    }


public:
    void mousePressEvent(QMouseEvent* event) override;
    void mouseMoveEvent(QMouseEvent* event) override;
    void keyPressEvent(QKeyEvent* event) override;
    void paintEvent(QPaintEvent* event) override;


};