#pragma once
#include <iostream>
#include <fstream>
#include <strstream>
#include <QPainter>
#include <QPolygon>
#include "matrx.h"
#include "mtl.h"
#include <QPen>



using namespace mtl;


class shape3d {
private:
    std::vector<vertex> *vertecies;
    std::vector<surface> *surfaces;
protected:
    std::string filename;
public:
    bool xrotation = false, yrotation = false ,zrotation = false, arotation = false;
    matrx rMtarix;
public:
    shape3d(const char * filename):filename(filename), vertecies(new std::vector<vertex>),surfaces(new std::vector<surface>), rMtarix(vertecies){}
    void setup(){setVertecies();setSurfaces();};
    virtual void setVertecies();
    virtual void setSurfaces();
    virtual void draw(QPainter* painter){for(auto &p : * surfaces) p.draw(painter);}
    virtual void rotate(const char Axis = 'Z');
    virtual void scale(float s);
    virtual void printvertecies(){for(auto &p : * vertecies) std::cout << p;};
    virtual void printsurfaces(){for(auto &p : * surfaces) p.print();};



};