BINARY=mylib.cpython-38-x86_64-linux-gnu.so

all: $(BINARY)

clean:
	rm -f $(BINARY) mylib.o

$(BINARY): mylib.o
	g++ -fPIC -g -shared -lpython3.8 -o $@ $<

mylib.o: mylib.cpp
	g++ -Dmylib_EXPORTS -I/usr/include/python3.8 -g -fPIC -fvisibility=hidden -c -o $@ $<

mylib.cpp : mylib.h
