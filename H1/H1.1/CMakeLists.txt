cmake_minimum_required(VERSION 3.17)
project(H1.1)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(H1.1
        main.cpp
        mittari.cpp
        mittari.hh)
