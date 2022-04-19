#pragma once
#include <QPainter>
#include <cmath>
#include "myTimer.h"
#include "mtl.h"
#include "matrx.h"

using namespace mtl;

class Box {
public:

    vertex vcs[4] = {vertex(100,100,0),vertex(-100,100,0),vertex(-100,-100,0)};
    matrx * m;
    surface* s;
    mytimer *timer;


public:
    Box(): timer(new mytimer), m(new matrx(vcs,3)), s(new surface(vcs)) {}

    void show(QPainter * painter){
        s->draw(painter);
    }

};