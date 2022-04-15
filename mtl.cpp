#include "mtl.h"


namespace mtl{

    float vertex::getabs() { return abs = sqrt(x*x + y*y + z*z);}
    vertex vertex::operator + (const vertex& other)const{
        return vertex(x+other.x,y+other.y,z+other.z);
    }
    vertex vertex::operator - (const vertex& other)const{
        return vertex(x-other.x,y-other.y,z-other.z);
    }
    float vertex::operator | (const vertex& other)const{
        return x*other.x + y*other.y + z*other.z;
    }
    vertex vertex::operator * (const vertex& other)const{
        float xr = y*other.z - z*other.y;
        float yr = z*other.x - x*other.z;
        float zr = x*other.y - y*other.x;

        return vertex (xr,yr,zr);
    }
    vertex vertex::operator * (float val)const{
        return vertex(x*val,y*val,z*val);
    }
    vertex vertex::operator / (float val)const{
        return (*this)*(1/val);
    }




}