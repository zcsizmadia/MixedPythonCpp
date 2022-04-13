cmake_minimum_required(VERSION 3.15)

project(mylib)

find_package(pybind11)

pybind11_add_module(mylib src/mylib.cpp)
