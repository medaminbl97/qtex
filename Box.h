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



public:
    Box(){}

    void show(QPainter * painter){
    }

};