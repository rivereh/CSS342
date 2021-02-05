main: main.o user.o list.o shallowcopylist.o deepcopylist.o
	g++ main.o user.o list.o shallowcopylist.o deepcopylist.o -o main

main.o: main.cpp
	g++ -c main.cpp

user.o: user.cpp
	g++ -c user.cpp

list.o: list.cpp
	g++ -c list.cpp

shallowcopylist.o: shallowcopylist.cpp
	g++ -c shallowcopylist.cpp

deepcopylist.o: deepcopylist.cpp
	g++ -c deepcopylist.cpp

clean:
	rm *.o