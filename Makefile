#!make -f

CFLAGS=-stdlib=libc++ -std=c++11

demo: Demo.o FamilyTree.o node.o
	g++ $(CFLAGS) $^ -o demo

test: badkan.o FamilyTree.o node.o
	g++ $(CFLAGS) $^ -o test

%.o: %.cpp
	g++ $(CFLAGS) -c $< -o $@
	

node.o: node.cpp node.h

FamilyTree.o: FamilyTree.cpp FamilyTree.hpp

Demo.o: Demo.cpp Demo.h

badkan.o: TestExample.cpp TestCounter.cpp doctest.h

clean:
	rm -f *.o demo test
