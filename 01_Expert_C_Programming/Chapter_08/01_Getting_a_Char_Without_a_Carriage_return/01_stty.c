#include <stdio.h>
#include <stdlib.h>
int main(){
	int c;

	system("stty raw");

	c = getchar();

	system("stty cooked");
}
