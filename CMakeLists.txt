cmake_minimum_required(VERSION 3.20)
project(piano
        LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)

find_package(Qt6 REQUIRED COMPONENTS Widgets)

add_executable(
        piano
        mainwindow.ui
        mainwindow.cpp
        main.cpp)

target_link_libraries(piano PRIVATE Qt6::Widgets)

set_target_properties(piano PROPERTIES
        WIN64_EXECUTABLE ON
        MACOSX_BUNDLE ON
        )

enable_testing()
add_executable(tester test/tester.cpp)
add_test(Tester tester)