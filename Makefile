CC=g++
CFLAGS = -c -Wall

all: main

main: main.o calculator.o helloworld.o
	$(CC) main.o calculator.o helloworld.o -o main
	
main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp
	
calculator.o: calculator.cpp
	$(CC) $(CFLAGS) calculator.cpp
	
helloworld.o: helloworld.cpp
	$(CC) $(CFLAGS) helloworld.cpp
	
clean:
	rm -rf *.o main
