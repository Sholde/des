#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "struct.h"
#include "des.h"
#include "io.h"
#include "convert.h"

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
			printf("help\n");
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
				char *s = read_file(argv[4]);

				u64 key = generate_key(argv[3]);
				msg *m = char_to_msg(s);
				msg *c = des(key, m);
				char *out = msg_to_hexa(c);
				write_file(argv[5], out);

				clear_msg(m);
				clear_msg(c);
				free(s);
				free(out);
			}
			else
			{
				char *s = read_file(argv[5]);

				u64 key = generate_key(argv[4]);
				msg *m = hexa_to_msg(s);
				msg *c = des(key, m);
				char *out = msg_to_char(c);
				write_file(argv[6], out);

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