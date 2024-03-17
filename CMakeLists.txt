cmake_minimum_required(VERSION 3.20)
project(piano
        LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
SET(CMAKE_AUTOUIC_SEARCH_PATHS ${CMAKE_CURRENT_SOURCE_DIR}/src)

find_package(Qt6 REQUIRED COMPONENTS Widgets)

include_directories(${CMAKE_SOURCE_DIR})

add_executable(piano)

add_subdirectory(src)
add_subdirectory(test)