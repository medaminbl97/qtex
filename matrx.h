#pragma once
#include "myTimer.h"
#include "mtl.h"

using namespace mtl;

    class matrx {
    public:
        std::vector<vertex> * vertecies;
        int size;
        mytimer *tx, *ty, *tz;
        float ax, ay, az;
    public:
        matrx(std::vector<vertex> * verts) : vertecies(verts), tx(new mytimer), ty(new mytimer), tz(new mytimer), ax(0.01), ay(0.01), az(0.01) {}

        void rotatex(float v = 0.01);

        void rotatey(float v = 0.01);

        void rotatez(float v = 0.01);

        void rotateall(float vx = 0.01, float vy = 0.01, float vz = 0.01);
    };



