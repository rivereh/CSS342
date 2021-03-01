main: main.o person.o student.o instructor.o supervisor.o tree.o
	g++ main.o person.o student.o instructor.o supervisor.o tree.o -o main

main.o: main.cpp
	g++ -c main.cpp

person.o: person.cpp
	g++ -c person.cpp

student.o: student.cpp
	g++ -c student.cpp

instructor.o: instructor.cpp
	g++ -c instructor.cpp

supervisor.o: supervisor.cpp
	g++ -c supervisor.cpp

tree.o: tree.cpp
	g++ -c tree.cpp

clean:
	rm *.o