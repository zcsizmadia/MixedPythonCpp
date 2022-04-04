NAME=mylib

BINARY=mylib$(shell python3-config --extension-suffix)

CFLAGS = -Dmylib_EXPORTS -g -fPIC -fvisibility=hidden $(shell python3-config --cflags)
LDFLAGS = -fPIC -g -shared $(shell python3-config --ldflags)

all: $(BINARY)

clean:
	rm -f $(BINARY) mylib.o

$(BINARY): mylib.o
	g++ -o $@ $< $(LDFLAGS)

mylib.o: mylib.cpp
	g++ $(CFLAGS) -c -o $@ $<

mylib.cpp : mylib.h
