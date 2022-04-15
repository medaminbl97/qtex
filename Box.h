#pragma once
#include <QPainter>
#include <cmath>
#include "myTimer.h"



class Box {
public:

    int betrag;
    int x,y;
    double alpha = 0;
    mytimer *timer;


public:
    Box(int betrag = 100): betrag(betrag), timer(new mytimer) {timer->tick();}
    void rotate(float v = 0.001){
        if(timer->getduration() >= v){
            timer->tick();
        x = betrag*cos(alpha);
        y = betrag*sin(alpha);
        alpha += 0.01;
        }
    }
    void show(QPainter * painter){painter->drawLine(0,0,x,y);}

};