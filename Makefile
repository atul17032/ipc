

default: carrace
all:carrace
CXX_FLAGS = -std=c99
CPP_FLAGS = -std=c++11
$(warning $(CXX_FLAGS))
$(warning $(CPP_FLAGS))
carrace: carrace.c
	gcc -O2 -o carrace carrace.c

run: carrace
	./carrace > out 2>&1

clean:
	rm -rf carrace out
