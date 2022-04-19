#include "mtl.h"


namespace mtl{

    void vertex::setabs() const {abs = sqrt(x*x + y*y + z*z);}
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


    void surface::draw(QPainter *painter) {
        QPolygon polygon;
        polygon << QPoint(vs[0].y,vs[0].x);
        polygon << QPoint(vs[1].y,vs[1].x);
        polygon << QPoint(vs[2].y,vs[2].x);
        updatecolor();
        painter ->setBrush(QColor((int)(updatecolor().x),(int)(updatecolor().y),(int)(updatecolor().z)));
        painter->drawPolygon(polygon);

        painter->drawLine(0,0,normalvector.y,normalvector.x);
    }

    vertex& surface::updateNormalVectotr() {
        vertex v1,v2;
        v1 = *vs - *(vs+1);
        v2 = *vs - *(vs+2);
        normalvector = v1 * v2;
        return normalvector;
    }

    vertex surface::updatecolor() {
        vertex z(0,0,-1);
        float a = z|*updateNormalVectotr().getuv();
        std::cout << "a = " << abs(a) << std::endl;
        std::cout << *updateNormalVectotr().getuv();
        vertex col = color*abs(a);
        return col;
    }


}