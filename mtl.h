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
        vertex* vs;
        vertex normalvector;
    public:
        vertex color;
    public:
        surface(vertex* vs) : vs(vs) , color(195 ,83 ,255){updateNormalVectotr();}
        void draw(QPainter* painter);
        vertex updatecolor();
        vertex& updateNormalVectotr();

    };





}

