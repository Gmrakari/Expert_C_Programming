

To a compiler,an array is an address,and a pointer is the address of an address.

thus,they get a lot of practice seeing arrays and pointers in function arguments where they are fully interchangeable,like this

char my_array[10];
char * my_ptr;

i = strlen(my_array);
j = strlen(my_ptr);

pritnf("%s %s",my_ptr,my_array);

Read again and again:

Rule 1:
	An array name in an expression(in contrast with a declaration) is treated by the compiler as a pointer to the first element of the array.

Rule 2:
	A subscript is always equivalent to an offset from a pointer.

Rule 1 and 2 in combination mean that subscripted array references can always be written equally well as a pointer-to-base-of-array plus offset.

For example:
	int a[10],*p,i = 2;
then a[i] can equally be accessed in any of these ways:
p = a;		p = a;		p = a + i;
p[i];		*(p + i);	*p;


Rule 3:
	An array name in the declaration of a function parameter is treated by the compiler as a pointer to the first element of the array

Term:
	Parameter is a variable defined in a function definition or a function prototype decllaration.Some people call this a "formal parameter"
		Example:
			int power(int base,int n);
					base and n are parameters
	
	Argument is a value used in a particular call to a function.Some people call this an "actual parameter."
	Example:
		i = power(10,j);10 & j are arguments

my_function(int *turnip){...}
my_function(int turnip[]){...}
my_function(int turnip[200]){...}


int my_int;
int *my_int_ptr;
int my_int_array[10];

Actual Argument in Call		 |				Type		|		 			Common Purpose

func(&my_int);					Address of an integer				"Call-by-references" of an int
	
func(my_int_ptr);				A pointer to an interger 			To pass a pointer

func(my_int_array);				An array of integers				To pass an array

func(&my_int_array[i]);		Address of an element of int array 		To pass a slice of an array






