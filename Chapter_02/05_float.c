#include <stdio.h>

int main(){
	float x = 3,y;
	y = ++x*x++;
	printf("%f\n",y);

	return 0;
}
