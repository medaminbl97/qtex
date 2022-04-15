#include <iostream>
#include "mtl.h"



int main(){
    mtl::vertex v(100,33,55);
    std::cout << v ;
    std::cout << *v.getuv();



    return 0;
}

