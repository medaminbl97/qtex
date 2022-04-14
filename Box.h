#pragma once
#include <QPainter>



class Box {
public:
    int b,h;
    int x,y;

public:
    Box(int b = 100, int h = 100): b(b), h(h) , x(0), y(0) {}
    void show(QPainter * painter){painter->drawRect(x,y,x+b,y+h);}

};