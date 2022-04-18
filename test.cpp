#include <iostream>
#include "mtl.h"
#include "matrx.h"



int main(){
    mtl::vertex v(100,100,0);
    matrx mtx(&v,1);
    std::cout << v << "\n------------------------\n";

    while(1){
    mtx.rotatez(1);
    std::cout << v ;}



    return 0;
}

