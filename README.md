# DES

It's a Data Encryption Standard algorithm in C.

## Compile

<pre>make</pre>

## Usage

This program use passwords to generate key.

### Encrypt

Encrypt test.txt using :

<pre>./des [ALGORITHM] enc test.txt test.enc</pre>

### Decrypt

Decrypt test.enc using :

<pre>./des [ALGORITHM] enc -d test.enc test.dec</pre>

### ALGORITHM

One of these option :
- -des
- -3des

### Verify

<pre>diff test.txt test.dec</pre>