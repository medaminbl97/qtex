cmake_minimum_required(VERSION 3.20)
project(qtex)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_PREFIX_PATH /opt/homebrew/Cellar/qt/6.2.3_1)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

if(CMAKE_VERSION VERSION_LESS "3.7.0")
    set(CMAKE_INCLUDE_CURRENT_DIR ON)
endif()

find_package(Qt6 COMPONENTS Widgets REQUIRED)


add_executable(qtex main.cpp myApp.h myApp.cpp myTimer.h mtl.h mtl.cpp matrx.h matrx.cpp shape3d.h shape3d.cpp)
#add_executable(qtex test.cpp mtl.h mtl.cpp matrx.h matrx.cpp shape3d.h shape3d.cpp)

target_link_libraries(qtex Qt6::Widgets)