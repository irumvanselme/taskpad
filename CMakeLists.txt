cmake_minimum_required(VERSION 3.19)
project(taskpad)

set(CMAKE_CXX_STANDARD 20)

add_executable(taskpad main.cpp functions/print-help.cpp)