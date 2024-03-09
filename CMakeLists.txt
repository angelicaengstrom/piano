cmake_minimum_required(VERSION 3.20)
project(piano)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_PREFIX_PATH "C:\\Qt\\6.2.2\\mingw_64\\lib\\cmake\\")

find_package(Qt6Widgets REQUIRED)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

add_executable(piano main.cpp mainwindow.cpp)
target_link_libraries(piano Qt6::Widgets)