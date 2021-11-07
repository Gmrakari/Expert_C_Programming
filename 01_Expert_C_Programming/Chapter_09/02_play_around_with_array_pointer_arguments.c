#include <stdio.h>

void func(char ca[]){
	printf("&ca:%x\t&(ca[0]):%x\t&(ca[1]):%x\t\n",&ca,&(ca[0]),&(ca[1]));
	printf("&ca:%s\t&(ca[0]):%s\t&(ca[1]):%s\t\n",&ca,&(ca[0]),&(ca[1]));
}

int main(){
	char ca[] = "abc";
	func(ca);
	return 0;
}
