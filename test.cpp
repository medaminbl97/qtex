#include <iostream>
#include "mtl.h"
#include "matrx.h"
#include <fstream>
#include <strstream>
#include "shape3d.h"




int main(){
    shape3d * s;
    s = new shape3d("torus.obj");
    s->setVertecies();
    s->setSurfaces();
    s->printvertecies();
    s->printsurfaces();



    return 0;
}

