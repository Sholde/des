# Compile variable
GCC=gcc
CFLAGS=-std=c99
OFLAGS=-Ofast
DFLAGS=-g3 -Wall

# To clean
EXE=des
TXT=*.txt
ENC=*.enc
DEC=*.dec

all : main

main :
	$(GCC) $(CFLAGS) $(OFLAGS) $(DFLAGS) io.c convert.c des.c main.c -o $(EXE)

clean :
	rm -rf $(EXE) $(TXT) $(ENC) $(DEC)