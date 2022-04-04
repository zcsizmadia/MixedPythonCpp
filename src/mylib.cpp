#include <pybind11/pybind11.h>
#include "mylib.h"

double add(double a, double b)
{
    return a + b;
}

double subtract(double a, double b)
{
    return a - b;
}

namespace py = pybind11;

PYBIND11_MODULE(mylib, m)
{
    // Docstring
    m.doc() = "Adder";

    // Binding to add and subtract
    m.def("add", &add);
    m.def("subtract", &subtract);

    // Binding to Adder
    py::class_<Add>(m, "Add")
        .def(py::init<>())
        .def(py::init<double>())
        .def("add", &Add::add<int>)
        .def("add", &Add::add<long>)
        .def("add", &Add::add<double>)
        .def("subtract", &Add::add<int>)
        .def("subtract", &Add::add<long>)
        .def("subtract", &Add::add<double>)
        .def("get_result", &Add::get_result);
}