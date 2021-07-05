all: main.cpp Graph.h Node.h Node.cpp Link.cpp Link.h Graph.cpp
	g++ -c main.cpp Graph.h Node.h Node.cpp Link.cpp Link.h Graph.cpp
	g++ -o main main.cpp Graph.h Node.h Node.cpp Link.cpp Link.h Graph.cpp