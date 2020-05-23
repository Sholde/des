# Compiler variable
CC=gcc

# C flags
CFLAGS=-std=c99

# Compiler optimization
OFLAGS=-Ofast

# Debug
DFLAGS=-g3 -Wall

# C file
MAIN_IN=src/io.c src/convert.c src/des.c src/main.c

# To clean
EXE=des
TXT=*.txt
ENC=*.enc
DEC=*.dec

all : main

main :
	$(CC) $(DFLAGS) $(CFLAGS) $(OFLAGS) $(MAIN_IN) -o $(EXE)

clean :
	rm -rf $(EXE) $(TXT) $(ENC) $(DEC)