#!make -f

CFLAGS=-stdlib=libc++ -std=c++11

demo: Demo.o node.o FamilyTree.o
	g++ $(CFLAGS) $^ -o demo

test: badkan.o node.o FamilyTree.o
	g++ $(CFLAGS) $^ -o test

%.o: %.cpp
	g++ $(CFLAGS) -c $< -o $@
	

node.o: node.cpp node.hpp

FamilyTree.o: FamilyTree.cpp FamilyTree.hpp

Demo.o: Demo.cpp Demo.h

badkan.o: TestExample.cpp TestCounter.cpp doctest.h

clean:
	rm -f *.o demo test
