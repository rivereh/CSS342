main: main.o event.o binaryEvent.o timedEvent.o decisionTree.o
	g++ main.o event.o binaryEvent.o timedEvent.o decisionTree.o -o main

main.o: main.cpp
	g++ -c main.cpp

event.o: event.cpp
	g++ -c event.cpp

binaryEvent.o: binaryEvent.cpp
	g++ -c binaryEvent.cpp

timedEvent.o: timedEvent.cpp
	g++ -c timedEvent.cpp

decisionTree.o: decisionTree.cpp
	g++ -c decisionTree.cpp

clean:
	rm *.o