#pragma once
#include "myTimer.h"
#include "mtl.h"

using namespace mtl;

    class matrx {
    public:
        vertex *verts;
        int size;
        mytimer *tx, *ty, *tz;
        float ax, ay, az;
    public:
        matrx(mtl::vertex *verts, int size) : verts(verts), tx(new mytimer), ty(new mytimer), tz(new mytimer),
                                               size(size), ax(0.01), ay(0.01), az(0.01) {}

        void rotatex(float v = 0.001);

        void rotatey(float v = 0.001);

        void rotatez(float v = 0.001);

        void rotateall(float vx = 0.001, float vy = 0.001, float vz = 0.001);
    };



