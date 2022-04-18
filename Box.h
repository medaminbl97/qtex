#pragma once
#include <QPainter>
#include <cmath>
#include "myTimer.h"
#include "mtl.h"
#include "matrx.h"

using namespace mtl;

class Box {
public:

    vertex vcs[4] = {vertex(100,100,0),vertex(100,-100,0),vertex(-100,-100,0),vertex(-100,100,0)};
    matrx * m;
    vlinker *linker;
    double alpha = 0;
    mytimer *timer;


public:
    Box(): timer(new mytimer), m(new matrx(vcs,4)), linker(new vlinker(vcs,4)){}

    void show(QPainter * painter){
        linker->link(painter);
    }

};