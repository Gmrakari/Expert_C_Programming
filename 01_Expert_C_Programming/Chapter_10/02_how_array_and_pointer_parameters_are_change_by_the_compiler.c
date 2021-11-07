


Argument is:								Mached Formal Param: 
array of array: char c[8][10];	-->		char (*c)[10];	pointer to array
array of pointer: char *c[15];			char **c;		pointer to pointer
pointer to array: char (*c)[64];		char (*c)[64];	doesn't change;
pointer to pointer:char **c;			char **c;		doesn't change;


