# DES

It's a Data Encryption Standard algorithm in C. This program use ASCII encoding for password and file character.

## Compile

```make```

## Usage

This program use passwords to generate keys.

### Encrypt

Encrypt test.txt using :

```./des [ALGORITHM] -e test.txt test.enc```

### Decrypt

Decrypt test.enc using :

```./des [ALGORITHM] -d test.enc test.dec```

### MORE

| ALGORITM |
| -------- |
| `-des`   |
| `-3des`  |

| Command | Description |
| ------- | ----------- |
| -des    | Data Standard algorithm |
| -3des   | Triple Data Standard algorithm |
| -e      | Encrypt |
| -d      | Decrypt |
| -help   | Show help |

### Verify

```diff test.txt test.dec```

## Source

The main source code is onlocated at : ![https://github.com/Sholde/des](https://github.com/Sholde/des "on Github")