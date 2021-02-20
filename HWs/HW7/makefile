main: main.o binarytree.o
	g++ main.o binarytree.o -o main

main.o: main.cpp
	g++ -c main.cpp

binarytree.o: binarytree.cpp
	g++ -c binarytree.cpp

clean:
	rm *.o