#include "mtl.h"


namespace mtl{

    void vertex::setabs() {abs = sqrt(x*x + y*y + z*z);}
    vertex vertex::operator + (const vertex& other)const{
        return vertex(x+other.x,y+other.y,z+other.z);
    }
    vertex vertex::operator - (const vertex& other)const{
        return vertex(x-other.x,y-other.y,z-other.z);
    }
    float vertex::operator | (const vertex& other)const{
        return x*other.x + y*other.y + z*other.z;
    }
    /*vertex vertex::operator * (const vertex& other)const{
        float xr = y*other.z - z*other.y;
        float yr = z*other.x - x*other.z;
        float zr = x*other.y - y*other.x;

        return vertex (xr,yr,zr);
    }*/
    vertex vertex::operator * (float val)const{
        return vertex(x*val,y*val,z*val);
    }
    vertex vertex::operator / (float val)const{
        return (*this)*(1/val);
    }

    void vertex::link(const vertex &other, QPainter *painter) const {
        painter->drawLine((int)y,(int)x,(int)other.y,(int)other.x);

    }
    void vertex::draw(QPainter* painter) const {
        painter->drawLine(0,0,(int)y,(int)x);
    }

    void vertex::rotate(float v ){
        if(timer->getduration() >= v)
        {
            timer->tick();
            x = abs2d * cos(alpha);
            y = abs2d * sin(alpha);
            alpha += 0.001;
            setabs();
            setabs2d();
        }
    }

    vertex vertex::operator*(vertex matrix[3]) {
        vertex v(*this);
        x = (v | matrix[0]);
        y = (v | matrix[1]);
        z = (v | matrix[2]);

        return *this;
    }

    void vlinker::link(QPainter* painter) {
        int i=0;
        for ( i ; i < size-1; ++i) {
            vs[i].link(vs[i+1],painter);
        }
        vs[i].link(vs[0],painter);
    }


}