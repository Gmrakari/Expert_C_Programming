#define ISUNSIGNED(a) (a >= 0 && ~a >= 0)

Alternatively,assuming the argument is to be a type,one answer would use type casts:

#define ISUNSIGNED(type) ((type) 0 - 1 > 0)


