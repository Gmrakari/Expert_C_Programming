#include <stdio.h>

int array[] = { 23, 34, 12, 17,204, 99, 16 };
#define TOTAL_ELEMENTS (sizeof(array)/sizeof(array[0]))

int main(){
	int d = -1;
	int x = 0;

	//do not use unsigned number,without exit negative value
	//if( d <= TOTAL_ELEMENTS - 2)
	
	if( d <= (int )TOTAL_ELEMENTS - 2)
		 x = array[d + 1];
	printf("x = %d\n",x);
	return 0;

}

