cmake_minimum_required(VERSION 3.4...3.18)

project(mylib)

find_package(Python COMPONENTS Interpreter Development)

add_subdirectory(pybind11)

pybind11_add_module(mylib src/mylib.cpp)
