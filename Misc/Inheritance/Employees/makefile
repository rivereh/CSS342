main: main.o employee.o hourlyemployee.o salariedemployee.o
	g++ main.o employee.o hourlyemployee.o salariedemployee.o -o main

main.o: main.cpp
	g++ -c main.cpp

employee.o: employee.cpp
	g++ -c employee.cpp

hourlyemployee.o: hourlyemployee.cpp
	g++ -c hourlyemployee.cpp

salariedemployee.o: salariedemployee.cpp
	g++ -c salariedemployee.cpp

clean:
	rm *.o