main: main.o list.o set.o queue.o stack.o
	g++ main.o list.o set.o queue.o stack.o -o main

main.o: main.cpp
	g++ -c main.cpp

list.o: list.cpp
	g++ -c list.cpp

set.o: set.cpp
	g++ -c set.cpp

queue.o: queue.cpp
	g++ -c queue.cpp

stack.o: stack.cpp
	g++ -c stack.cpp

clean:
	rm *.o