mainpro:main.o Mino.o MinoI.o 
	g++ -o mainpro main.o Mino.o MinoI.o

main.o:main.cpp
	g++ -c main.cpp

Mino.o:Mino.cpp Mino.h
	g++ -c Mino.cpp

MinoI.o:MinoI.cpp MinoI.h
	g++ -c MinoI.cpp


clean:
	rm *.o 
