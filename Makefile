GCC=gcc
CFLAGS=-std=c99 -Ofast
WFLAGS=-g3 -Wall

all : main

main :
	$(GCC) $(CFLAGS) $(WFLAGS) io.c convert.c des.c main.c -o des

clean :
	rm -rf *.txt des