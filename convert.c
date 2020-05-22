#include <string.h>
#include <stdlib.h>

#include "struct.h"
#include "convert.h"

msg *char_to_msg(char *s) {
	int len = strlen(s);
	msg *m = malloc(sizeof(msg));
	
	m->size = len / 8;
  if((len * 8) % 64)
    m->size++;
	m->tab = malloc(sizeof(u64) * m->size);
	
  int count = 0;

	for(int i = 0; i < len; i++)
  {
    count = (i * 8) / 64;
    m->tab[count] <<= 8;
    m->tab[count] ^= s[i];
	}
  m->tab[count] <<= 64 - (len * 8) % 64;
	return m;
}

char *msg_to_char(msg *m) {
	int len = m->size * 8;

	char *ret = malloc(sizeof(char) * (len + 1));
	ret[len] = '\0';

	for(int i = 0; i < m->size; i++)
  {
    for(int j = 0; j < 8; j++)
    {
      ret[i*8+j] = (m->tab[i] >> (64 - (j + 1) * 8)) & 0xFF;
    }
	}
	return ret;
}

msg *hexa_to_msg(char *s) {
	int len = strlen(s);
	msg *m = malloc(sizeof(msg));
	
	m->size = len / 4;
  if((len * 4) % 64)
    m->size++;
	m->tab = malloc(sizeof(u64) * m->size);
	
  int count = 0;

	for(int i = 0; i < len; i++)
  {
    u64 tmp = s[i];
    if(tmp >= 48 && tmp <= 57) {
      tmp -= 48;
    }
    else if (tmp >= 97 && tmp <= 102) {
      tmp -= (97 - 10);
    }
    else {
      exit(666);
    }
    count = (i * 4) / 64;
    m->tab[count] <<= 4;
    m->tab[count] ^= tmp;
	}
  m->tab[count] <<= 64 - (len * 4) % 64;
	return m;
}

char *msg_to_hexa(msg *m) {
	int len = m->size * 16;

	char *ret = malloc(sizeof(char) * (len + 1));
	ret[len] = '\0';

	for(int i = 0; i < m->size; i++)
  {
    for(int j = 0; j < 16; j++)
    {
      u8 tmp = (m->tab[i] >> (64 - (j + 1) * 4)) & 0xF;
      if(tmp > 15 || tmp < 0) {
        exit(666);
      }
      if(tmp < 10) {
        tmp += 48;
      }
      else {
        tmp += 87;
      }
      ret[i*16+j] = tmp;
    }
	}
	return ret;
}