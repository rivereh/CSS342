driver: driver.o card.o
	g++ driver.o card.o -o driver

driver.o: driver.cpp
	g++ -c driver.cpp

card.o: card.cpp
	g++ -c card.cpp

clean:
	rm *.o