main: main.o user.o node.o doublylinkedlist.o
	g++ main.o user.o node.o doublylinkedlist.o -o main

main.o: main.cpp
	g++ -c main.cpp

user.o: user.cpp
	g++ -c user.cpp

node.o: node.cpp
	g++ -c node.cpp

doublylinkedlist.o: doublylinkedlist.cpp
	g++ -c doublylinkedlist.cpp

clean:
	rm *.o