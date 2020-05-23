#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "sdes.h"

#define RESET "\033[0m"
#define BOLD "\033[1m"

int main(int argc, char **argv)
{
	if (argc < 2)
	{
		printf("You must provide at least 1 parameter, where you specify the action.\n");
		printf("Try : %s --help\n", argv[0]);
		return 1;
	}

	if (argc == 2)
	{
		if (strcmp(argv[1], "--help") == 0)
		{
			printf(BOLD "RTFM\n" RESET);
			return 0;
		}
		else
		{
			printf("Invalid action. Try : %s --help\n", argv[0]);
			return 1;
		}
	}

	if (argc != 5)
	{
		printf("Invalid action. Try : %s --help\n", argv[0]);
		return 1;
	}

	if (strcmp(argv[1], "-des") == 0)
	{
		if (strcmp(argv[2], "-e") == 0)
		{
			char pw[64];
			printf("enter des encryption password:\n");
			scanf("%s", pw);
			char *s = read_file(argv[3]);
			char *out = encrypt_des(pw, s);
			write_file(argv[4], out);
			free(s);
			free(out);
		}
		else if (strcmp(argv[2], "-d") == 0)
		{
			char pw[64];
			printf("enter des decryption password:\n");
			scanf("%s", pw);
			char *s = read_file(argv[3]);
			char *out = decrypt_des(pw, s);
			write_file(argv[4], out);
			free(s);
			free(out);
		}
		else
		{
			printf("Invalid action. Try : %s --help\n", argv[0]);
			return 1;
		}
	}
	else if (strcmp(argv[1], "-3des") == 0)
	{
		if (strcmp(argv[2], "-e") == 0)
		{
			char pw[64];
			printf("enter des encryption password:\n");
			scanf("%s", pw);
			char *s = read_file(argv[3]);
			char *out = encrypt_3des(pw, s);
			write_file(argv[4], out);
			free(s);
			free(out);
		}
		else if (strcmp(argv[2], "-d") == 0)
		{
			char pw[64];
			printf("enter des decryption password:\n");
			scanf("%s", pw);
			char *s = read_file(argv[3]);
			char *out = decrypt_3des(pw, s);
			write_file(argv[4], out);
			free(s);
			free(out);
		}
		else
		{
			printf("Invalid action. Try : %s --help\n", argv[0]);
			return 1;
		}
	}
	else
	{
		printf("Bad algorithm. Try : %s --help\n", argv[0]);
		return 0;
	}

	return 0;
}