import sys
sys.path.append("build")
sys.path.append("build/Debug")
from mylib import add, Add


def test_add():
    assert add(2, 5) == 7


def test_add_class():
    adder = Add(0)
    adder.add(1)
    adder.add(2)
    adder.add(3)
    adder.add(4)
    assert adder.get_result() == 10


if __name__ == '__main__':
    test_add()
    test_add_class()
