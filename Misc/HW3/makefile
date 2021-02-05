main: main.o user.o moderator.o admin.o doublylinkedlist.o
	g++ main.o user.o moderator.o admin.o doublylinkedlist.o -o main

main.o: main.cpp
	g++ -c main.cpp

user.o: user.cpp
	g++ -c user.cpp

moderator.o: moderator.cpp
	g++ -c moderator.cpp

admin.o: admin.cpp
	g++ -c admin.cpp

doublylinkedlist.o: doublylinkedlist.cpp
	g++ -c doublylinkedlist.cpp

clean:
	rm *.o