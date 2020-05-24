# DES

It's a C implementatin of Data Encryption Standard algorithm and Triple Data Encryption Standard algorithm.

## Overview

This program use ASCII encoding for password and file character. See [ascii table](http://www.asciitable.com). Don't use space in your password.

## Compile

Compile using :

```
make
```

## Usage

### Demo

```
./des [ALGORITHM] [ACTION] [INPUT FILE] [OUTPUT FILE]
```

| ALGORITHM |
| --------- |
| `-des`    |
| `-3des`   |

| ACTION |
| ------ |
| `-e`   |
| `-d`   |

### Encrypt

Encrypt test.txt using :

```
./des [ALGORITHM] -e test.txt test.enc
```

### Decrypt

Decrypt test.enc using :

```
./des [ALGORITHM] -d test.enc test.dec
```

### Verify

Verify if your decrypted file is like your text file :

```
diff test.txt test.dec
```

## More

| Command  | Description |
| -------- | ----------- |
| `-des`   | Data Standard algorithm |
| `-3des`  | Triple Data Standard algorithm |
| `-e `    | Encrypt |
| `-d`     | Decrypt |
| `--help` | Show help |

## Dependencies

`make` `gcc`

## Source

The main source code is onlocated at : [https://github.com/Sholde/des](https://github.com/Sholde/des "On Github")