#ifndef _des_h
#define _des_h

// Left rot
#define lrot64(x, y) ((x << y) ^ (x >> (64 - y)))

// Right rot
#define rrot64(x, y) ((x >> y) ^ (x << (64 - y)))

// Select bit and test it
#define select_bit(x, y) ((x & ((u64)1 << (64 - y)))?1:0)

// Function
u64 generate_key(const char *s);

u48 *generate_sub_keys(const u48 key);

u64 initial_permutation(const u64 n);

u64 initial_permutation_inverse(const u64 n);

u48 expension(const u32 n);

u32 s_box(const u48 n);

u32 permutation(const u32 n);

u32 function_f(const u32 r0, const u48 sub_key);

void one_turn(const u48 sub_key, u32 *l, u32 *r);

void exchange(u32 *l, u32 *r);

u64 des_block(const u48 *sub_keys, const u64 input);

msg *des(const u64 key, msg *input);

#endif // !_des_h