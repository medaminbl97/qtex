#pragma once
#include <iostream>
#include <cmath>

namespace mtl {

    class unitV {

    };

    class vertex {
    public:
        float x, y, z;
        float abs;
    public:
        vertex(float x , float y , float z) : x(x),y(y),z(z) { getabs();}
        vertex() : x(0),y(0),z(0), abs(0) {}

    public:

        float getabs();
        vertex * getuv(){if(abs != 0 ) return new vertex((*this)/abs); return nullptr;}
        friend std::ostream& operator <<( std::ostream& stream , const vertex& obj){ stream << "--> Vtx : "<< '(' << obj.x << ',' << obj.y << ',' << obj.z << ')' << "  --> Abs = " << obj.abs <<'\n'; return stream; }

        vertex operator + (const vertex& other)const;
        vertex operator - (const vertex& other)const;
        float operator | (const vertex& other)const;
        vertex operator * (const vertex& other)const;
        vertex operator * (float val)const;
        vertex operator / (float val)const;



    };



}