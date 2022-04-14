#include <iostream>
#include <QApplication>
#include <QWidget>
#include <QWindow>
#include "myApp.h"
#include <ctime>
#include <chrono>
#include <thread>
#include <iomanip>
int main(int argc, char ** argv) {
    QApplication app(argc, argv) ;
    mytimer t1,t2;


        t2.tick();


        for (long int i = 0; i < 100; ++i) {
            t1.tick();
            if(t1.con(0.000001))
            {i++;
            std::cout << i << std::endl;} }

        std::cout << std::fixed << t2.getduration() << std::endl;






    return app.exec();
}
