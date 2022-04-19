#include "shape3d.h"


void shape3d::setVertecies() {
    std::ifstream inputfile(filename);

    if(inputfile.is_open()){
        char line[128];
        char junk;
        vertex v;

        while(!inputfile.eof()){


        inputfile.getline(line,128);
        std::strstream s;
        s << line;
        if(line[0] == 'v') {
            s >> junk >> v.x >> v.y >> v.z;
            vertecies->push_back(v);
        }
        }
    }
    inputfile.close();

}

void shape3d::setSurfaces() {
    int a,b,c;

    std::ifstream inputfile(filename);
    if(inputfile.is_open()) {
        char line[128];
        char junk;
        while (!inputfile.eof()) {

            inputfile.getline(line, 128);
            std::strstream s;
            s << line;
            if (line[0] == 'f') {
                s >> junk >> a >> b >> c;
                std::cout << a << " " << b << " " << c << std::endl;
                surfaces->push_back(surface(&vertecies->at(a-1), &vertecies->at(b-1), &vertecies->at(c-1)));
            }
        }
    }
    inputfile.close();


}

void shape3d::rotate(const char Axis) {
    switch (Axis) {
        case 'X' : rMtarix.rotatex(); break;
        case 'Y' : rMtarix.rotatey(); break;
        case 'Z' : rMtarix.rotatez(); break;
        case 'A' : rMtarix.rotateall(); break;

    }

}

void shape3d::scale(float s) {
    for(auto &p : *vertecies)
        p = p * s;

}