cmake_minimum_required(VERSION 3.21)
project(lab2)

set(CMAKE_CXX_STANDARD 14)

add_executable(lab2 main.cpp consola.cpp cmake-build-debug/consola.h consola.h problem.cpp problem.h tests.cpp tests.h)
