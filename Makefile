# Compiler variable
CC=gcc

# C flags
CFLAGS=-fPIC -shared

# Compiler optimization
OFLAGS=-Ofast

# Debug
DFLAGS=-g3 -Wall

# Library flags
LFLAGS=-lsdes

LIB_IN=src/sdes.c
LIB_OUT=libsdes.so

MAIN_IN=src/io.c src/sdes.c src/main.c
MAIN_OUT=sdes

# To clean
TXT=*.txt
ENC=*.enc
DEC=*.dec
LIB=*.a
OBJ=*.o
SO=*.so

.PHONY : all lib main clean

all : lib main

lib :
	$(CC) $(DFLAGS) $(CFLAGS) $(OFLAGS) $(LIB_IN) -o $(LIB_OUT)

main :
	$(shell ./install.sh)
	$(CC) $(DFLAGS) $(LFLAGS) $(OFLAGS) $(MAIN_IN) -o $(MAIN_OUT)

clean :
	rm -rf $(EXE) $(TXT) $(ENC) $(DEC) $(LIB) $(OBJ) $(SO)
