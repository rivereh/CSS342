exam: exam.o song.o catalog.o purchased.o recentlyplayed.o
	g++ exam.o song.o catalog.o purchased.o recentlyplayed.o -o exam

exam.o: exam.cpp
	g++ -c exam.cpp

song.o: song.cpp
	g++ -c song.cpp

catalog.o: catalog.cpp
	g++ -c catalog.cpp

purchased.o: purchased.cpp
	g++ -c purchased.cpp

recentlyplayed.o: recentlyplayed.cpp
	g++ -c recentlyplayed.cpp

clean:
	rm *.o