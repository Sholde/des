#ifndef _struct_h
#define _struct_h

// Typedef
typedef unsigned char u8;
typedef unsigned int u32;
typedef long unsigned u48;
typedef long long unsigned u64;

typedef struct {
  u64 *tab;
  u64 size;
} msg;

#endif // !_struct_h