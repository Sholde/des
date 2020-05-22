#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "struct.h"
#include "des.h"
#include "io.h"
#include "convert.h"

#define RESET "\033[0m"
#define BOLD "\033[1m"

void clear_msg(msg *m) {
    free(m->tab);
    free(m);
}

int main(int argc, char **argv)
{
	if (argc < 2) {
		printf("You must provide at least 1 parameter, where you specify the action.\n");
		printf("Try : %s --help\n", argv[0]);
		return 1;
	}

	if(argc == 2)
	{
		if(strcmp(argv[1], "--help") == 0)
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

	if(strcmp(argv[1], "enc") == 0)
	{
		if(strcmp(argv[2], "-des") == 0)
		{
			if(strcmp(argv[3], "-d") != 0)
			{
				printf("enter des encryption password:\n");
				char pw[64];
				scanf("%s", pw);
				char *s = read_file(argv[3]);

				u64 key = generate_key(pw);
				msg *m = char_to_msg(s);
				msg *c = des(key, m);
				char *out = msg_to_hexa(c);
				write_file(argv[4], out);

				clear_msg(m);
				clear_msg(c);
				free(s);
				free(out);
			}
			else
			{
				printf("enter des decryption password:\n");
				char pw[64];
				scanf("%s", pw);
				char *s = read_file(argv[4]);

				u64 key = generate_key(pw);
				msg *m = hexa_to_msg(s);
				msg *c = des(key, m);
				char *out = msg_to_char(c);
				write_file(argv[5], out);

				clear_msg(m);
				clear_msg(c);
				free(s);
				free(out);
			}
			
		}
		else if(strcmp(argv[2], "-3des") == 0)
		{
			printf("Not yet implemented. Try : %s --help\n", argv[0]);
			return 0;
		}
	}
	else
	{
		printf("Invalid action. Try : %s --help\n", argv[0]);
		return 1;
	}

	return 0;
}