#ifndef _convert_h
#define _convert_h

/**
 * Set des_t from string
 * @param s : string
 * @param type : type of encoding (str : normal string, hexa : hexa string(cipher) )
 * @return des_t
 */
des_t *des_set_str(const char *s, const char *type);

/**
 * Set string from des_t
 * @param m : des_t
 * @param type : type of encoding (str : normal string, hexa : hexa string(cipher) )
 * return string
 */
char *des_get_str(des_t *m, const char *type);

#endif // !_convert_h