main: main.o pfarrayd.o
	g++ main.o pfarrayd.o -o main

main.o: main.cpp
	g++ -c main.cpp

pfarrayd.o: pfarrayd.cpp
	g++ -c pfarrayd.cpp

clean:
	rm *.o