# DES

It's a Data Encryption Standard algorithm in C. This program use ASCII encoding for password and file character.

## Compile

Compile using :

```
make
```

## Usage

This program use passwords to generate keys.

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

Verify if your decypher file is like your text file :

```
diff test.txt test.dec
```

## More

| ALGORITHM |
| --------- |
| `-des`    |
| `-3des`   |

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

The main source code is onlocated at : ![https://github.com/Sholde/des](https://github.com/Sholde/des "On Github")