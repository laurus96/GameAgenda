TARGET = main

OUTDIR=./build/out

CC=clang++
CFLAGS = -std=c++20 -Iinclude

objects = main.o game.o

$(TARGET): $(objects)
	$(CC) -o $(OUTDIR)/$(TARGET) $(objects)

main.o: ./src/main.cpp ./include/game.cpp
	$(CC) $(CFLAGS) -c $^

game.o: ./include/game.h

clean:
	rm -f *.o *~
