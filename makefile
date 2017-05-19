main: DisArq.o Literatura.o Pintura.o Escultura.o Obras.o main.o
	g++ DisArq.o Literatura.o Pintura.o Escultura.o Obras.o main.o -o main

main.o: main.cpp DisArq.h Pintura.h Escultura.h Obras.h Literatura.h
	g++ -c main.cpp

Escultura.o:     Escultura.h Escultura.cpp Obras.h
	g++ -c Escultura.cpp

Literatura.o: Literatura.h Literatura.cpp Obras.h
	g++ -c Literatura.cpp

Pintura.o:   Pintura.h Pintura.cpp Obras.h
	g++ -c Pintura.cpp

DisArq:    DisArq.h DisArq.cpp Obras.cpp
	g++ -c DisArq.cpp

Marina.o:   Marina.h Marina.cpp Seres.h
	g++ -c Marina.cpp

Obras.o: Obras.h Obras.cpp
	g++ -c Obras.cpp

 


