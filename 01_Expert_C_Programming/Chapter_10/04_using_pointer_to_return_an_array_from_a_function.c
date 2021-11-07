


int (*paf())[20];

paf is a function,returning a pointer to an array of 20 integers.


int (*paf())[20]{
	int (*pear)[20]'
	pear = calloc(20,sizeof(int));
	if(!pear) longjmp(error,1);
	return pear;
}

int (*result)[20];	/* declare a pointer to 20-int array */
	...
result = paf();		/* call the function */

(*result)[3] = 12;	/* access the resulting array */


struct a_tag {
	int array[20];
}x,y;

struct a_tag my_function() { ... return y;}

x = y;
x = my_function();

x.array[i] = 38;

Make sure you don't return a pointer to an auto variable


