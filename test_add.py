
import sys
sys.path.append("./build")

from mylib import add, Add
import numpy

def test_add():
     assert add(2, 5) == 7

def test_Add():
    adder = Add(0)
    adder.add(1)
    adder.add(2)
    adder.add(3)
    adder.add(4)
    assert adder.get_result() == 10
