# DES

It's a C implementation of Data Encryption Standard algorithm and Triple Data Encryption Standard algorithm.

## Overview

This program use ASCII encoding for password and file character. See [ASCII table](http://www.asciitable.com). Don't use space in your password.

## Important note

Makefile setup library in your computer if you have debian system. See Lib chapter.

## Compile

Compile using :

```
make
```

## Usage

### Demo

```
./sdes [ALGORITHM] [ACTION] [INPUT FILE] [OUTPUT FILE]
```

| ALGORITHM | Description |
| --------- | ----------- |
| `-des`    | Data Standard algorithm |
| `-3des`   | Triple Data Standard algorithm |

| ACTION | Description |
| ------ | ----------- |
| `-e`   | Encrypt |
| `-d`   | Decrypt |

### Encrypt

Encrypt test.txt using :

```
./sdes [ALGORITHM] -e test.txt test.enc
```

### Decrypt

Decrypt test.enc using :

```
./sdes [ALGORITHM] -d test.enc test.dec
```

### Verify

Verify if your decrypted file is like your text file :

```
diff test.txt test.dec
```

## Library

`make` command create a library and install it on your computer if you have a Debian OS. To use the library in your own project, use :

```
#include "sdes.h"
```

## Dependencies

`make` `gcc`

## License

Under MIT License. See [details](https://github.com/Sholde/des/blob/master/LICENSE "License").

## Source

The main source code is onlocated at : [https://github.com/Sholde/des](https://github.com/Sholde/des "On Github")