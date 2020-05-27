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

### Verify

Verify if your decrypted file is like your text file :

```
diff test.txt test.dec
```

## Library

`make` command create a library.

### Install

Assure you have compile. See Compile section.

Install library using :

```
./install.sh
```

This work only for Debian system.

### Usage

To use the library in your own project, use :

```
#include "sdes.h"
```

And use option `-lsdes` when you compile.

### Delete

Delete library using :

```
./delete.sh
```

This work only for Debian system.


## Dependencies

`make` `gcc`

## License

Under MIT License. See [details](https://github.com/Sholde/des/blob/master/LICENSE "License").

## Source

The main source code is onlocated at : [https://github.com/Sholde/des](https://github.com/Sholde/des "On Github")