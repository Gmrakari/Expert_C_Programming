
#include <stdio.h>


void func(char *pa){
	printf("&pa:%x\t&(pa[0]):%x\t&(pa[1]):%x\t++p:%x\n",&pa,&(pa[0]),&(pa[1]),++pa);
	printf("&pa:%s\t&(pa[0]):%s\t&(pa[1]):%s\t++p:%s\n",&pa,&(pa[0]),&(pa[1]),++pa);
}


int main(){
	char *pa = "abc";
	func(pa);
	return 0;
}
