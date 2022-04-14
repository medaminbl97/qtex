#pragma once
#include <iostream>
#include <chrono>
#include <iomanip>

class mytimer {
public:
    std::chrono::duration<float> duration;
    std::chrono::system_clock::time_point sTime;
    std::chrono::system_clock::time_point eTime;
public:
    mytimer():duration(0){}
    void tick(){sTime = std::chrono::system_clock::now();};
    float getduration(){
        eTime = std::chrono::system_clock::now();
        duration = eTime - sTime;
        return duration.count();}
    bool con(float d){if(d == getduration()) { std::cout << std::fixed << getduration() ; std::cout << "s" << std::endl; return true; }}



};