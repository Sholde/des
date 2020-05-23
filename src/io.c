#include <stdio.h>
#include <stdlib.h>

#include "sdes.h"

void write_file(char *path, char *s) {
    FILE *f = fopen(path, "w");

    if (f == NULL) {
        fputs("File error", stderr);
        exit(1);
    }
    
    fprintf(f, s);
    fclose(f);
}

char *read_file(char *path) {
    FILE *f = fopen(path, "r");
    long lSize;
    char * buffer;
    size_t result;

    if (f == NULL) {
        fputs("File error", stderr);
        exit(1);
    }

    // obtain file size:
    fseek(f, 0, SEEK_END);
    lSize = ftell(f);
    rewind(f);

    // allocate memory to contain the whole file:
    buffer = malloc(sizeof(char) * lSize);
    if (buffer == NULL) {
        fputs("Memory error", stderr);
        exit (2);
    }

    // copy the file into the buffer:
    result = fread(buffer, 1, lSize, f);
    if (result != lSize) {
        fputs("Reading error", stderr);
        exit (3);
    }

    /* the whole file is now loaded in the memory buffer. */

    // terminate
    fclose(f);
    return buffer;
}