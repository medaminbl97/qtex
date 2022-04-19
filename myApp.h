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
#include "shape3d.h"


class myApp : public QWidget {
    Q_OBJECT
private:
    mytimer *timer;
    int a = 0, b = 0;
    shape3d * s;

public:
    explicit myApp(const std::string& title = "myApp",int width = 600 , int hight = 300): QWidget(nullptr),timer(new mytimer) { setWindowTitle(title.c_str());
        setMinimumSize(width,hight);
        resize(900,600);
        setPalette(QPalette(QColor(Qt::white)));
        s = new shape3d("nescafezp.obj");
        s->setup();
        s->printvertecies();
        s->scale(5000);
        s->printvertecies();

    }


public:
    void mousePressEvent(QMouseEvent* event) override;
    void mouseMoveEvent(QMouseEvent* event) override;
    void keyPressEvent(QKeyEvent* event) override;
    void paintEvent(QPaintEvent* event) override;


};