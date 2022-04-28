TARGET = main

OUTDIR=./build/out

CC=g++
CFLAGS = -Iinclude

objects = main.o game.o

$(TARGET): $(objects)
	$(CC) -o $(OUTDIR)/$(TARGET) $(objects)

main.o: ./src/main.cpp ./include/game.cpp
	$(CC) $(CFLAGS) -c $^

game.o: ./include/game.h

clean:
	rm -f *.o *~
