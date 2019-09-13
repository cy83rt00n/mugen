#Use g++ compiler
CC=g++
#Use c++ 11
CFLAGS=--std=c++11

all:
	clear && $(CC) $(CFLAGS) -I . *.cpp -o mugen && chmod +x mugen

clean:
	rm -f mugen