cmake_minimum_required(VERSION 3.15)
project(mylib)

if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Debug)
endif()

find_package(PythonInterp REQUIRED)
find_package(Python COMPONENTS Interpreter Development REQUIRED)

include_directories(${PYTHON_INCLUDE_DIRS} /usr/include)

find_package(pybind11 CONFIG REQUIRED)
pybind11_add_module(mylib add.cpp)
