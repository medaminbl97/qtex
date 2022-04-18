
#include "matrx.h"


void matrx::rotatex(float v) {

    if (tx->getduration() >= v) {

        for (int i = 0; i < size; ++i) {
            vertex xRotaion[3] = {vertex(1, 0, 0),
                                  vertex(0, cos(ax), -sin(ax)),
                                  vertex(0, sin(ax), cos(ax))};
            verts[i] * xRotaion;
        }
        tx->tick();
    }
}

void matrx::rotatey(float v) {

    if (ty->getduration() >= v) {

        for (int i = 0; i < size; ++i) {
            vertex yRotaion[3] = {vertex(cos(ay), 0, sin(ay)),
                                  vertex(0, 1, 0),
                                  vertex(-sin(ay), 0, cos(ay))};
            verts[i] * yRotaion;
        }
        ty->tick();
    }
}

void matrx::rotatez(float v) {

    if (tz->getduration() >= v) {

        for (int i = 0; i < size; ++i) {
            vertex zRotaion[3] = {vertex(cos(az), -sin(az), 0),
                                  vertex(sin(az), cos(az), 0),
                                  vertex(0, 0, 1)};
            verts[i] * zRotaion;
        }
        tz->tick();
    }
}

void matrx::rotateall(float vx, float vy, float vz) {
    rotatex(vx);
    rotatey(vy);
    rotatez(vz);

}