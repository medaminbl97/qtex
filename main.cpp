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

    myApp a("window");
    a.show();






    return app.exec();
}
