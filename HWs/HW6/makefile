main: main.o list.o show.o user.o
	g++ main.o list.o show.o user.o -o main

main.o: main.cpp
	g++ -c main.cpp

list.o: list.cpp
	g++ -c list.cpp

show.o: show.cpp
	g++ -c show.cpp

user.o: user.cpp
	g++ -c user.cpp

clean:
	rm *.o