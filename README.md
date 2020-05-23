# DES

It's a Data Encryption Standard algorithm in C. This program use ASCII encoding for password and file character.

## Compile

<pre>make</pre>

## Usage

This program use passwords to generate keys.

### Encrypt

Encrypt test.txt using :

<pre>./des [ALGORITHM] -e test.txt test.enc</pre>

### Decrypt

Decrypt test.enc using :

<pre>./des [ALGORITHM] -d test.enc test.dec</pre>

### ALGORITHM

One of these option :
- -des
- -3des

### Verify

<pre>diff test.txt test.dec</pre>

## Source

The main source code is on : <url>https://github.com/Sholde/des</url>