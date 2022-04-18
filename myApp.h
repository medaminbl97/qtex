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
    Box* box;
    int a = 0;
    int b = 0;
public:
    explicit myApp(const std::string& title = "myApp",int width = 600 , int hight = 300): QWidget(nullptr),timer(new mytimer) { setWindowTitle(title.c_str());
        setMinimumSize(width,hight);
        resize(900,600);
        setPalette(QPalette(QColor(Qt::white)));
        box = new Box();
    }


public:
    void mousePressEvent(QMouseEvent* event) override;
    void mouseMoveEvent(QMouseEvent* event) override;
    void keyPressEvent(QKeyEvent* event) override;
    void paintEvent(QPaintEvent* event) override;


};