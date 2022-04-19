#pragma once
#include <iostream>
#include <cmath>
#include <QPainter>
#include "myTimer.h"





namespace mtl {
    class vertex {
    public:
        float x, y, z;
        mutable float abs , abs2d;
        float alpha;
    private:
        mytimer * timer;
    public:
        vertex(float x , float y , float z) : x(x),y(y),z(z), timer(new mytimer){ setabs(); setabs2d();setalpha();}
        vertex() : x(0),y(0),z(0), abs(0) {}

    public:

        void setabs()const;
        void setalpha(){alpha = acos(y/x);}
        void setabs2d(){abs2d = sqrt(x*x+y*y);}
        vertex * getuv(){if(abs != 0 ) return new vertex((*this)/abs); return nullptr;}
        void link(const vertex& other, QPainter* painter)const;
        void draw(QPainter* painter)const;
        friend std::ostream& operator <<( std::ostream& stream , const vertex& obj){ obj.setabs();stream << "--> Vtx : "<< '(' << obj.x << ',' << obj.y << ',' << obj.z << ')' << "  --> Abs = " << obj.abs <<'\n'; return stream; }
        void rotate (float v = 0.0001);
        vertex operator + (const vertex& other)const;
        vertex operator - (const vertex& other)const;
        float operator | (const vertex& other)const;
        vertex operator * (const vertex& other)const;
        vertex operator * (vertex matrix [3]);
        vertex operator * (float val)const;
        vertex operator / (float val)const;



    };

    class surface {
    private:
        vertex* vs[3];
        vertex normalvector;
    public:
        vertex color;
    public:
        surface(vertex color = vertex (195 ,83 ,255)) : color(color){ updateNormalVector();}
        surface(vertex* v0,vertex* v1, vertex* v2 ,vertex color = vertex (195 ,83 ,255)) :color(color){ vs[0] = v0 ;  vs[1] = v1 ; vs[2] = v2 ; updateNormalVector();}
        void draw(QPainter* painter);
        void print(){
            std::cout << "-------------\n"<< "Surface " << std::endl;
            for (int i = 0; i < 3; ++i) {
                std::cout << *vs[i] ;
            }
            std::cout << "End Surface" << "--------------" << std::endl; }
        vertex updatecolor();
        vertex updateNormalVector();

    };





}

