

*a ^= *b;
*b ^= *a;
*a ^= *b;



f3 = lambda x.( x == a ? f2(a) ^ f2(b) : f2(x))

f2 = lambda x.( x == b ? f1(b) ^ f1(a) : f1(x))

f1 = lambda x.( x == a ? *a ^ *b : *x)

or in more readable terms:

f3(a) = f2(a) ^ f2(b),f3(x) = f2(x) else
f2(b) = f1(b) ^ f1(a),f2(x) = f1(x) else
f1(a) = *a ^ *b,f1(x) = *x else


