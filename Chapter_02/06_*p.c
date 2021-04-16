#include <stdio.h>
int main()
{
	int apple;
	
	int* p = 4;

//	int b = 4;

//	p = &b;
	


	apple = sizeof(int) * p;
	printf("apple = %d\n",apple);

	return 0;
}

