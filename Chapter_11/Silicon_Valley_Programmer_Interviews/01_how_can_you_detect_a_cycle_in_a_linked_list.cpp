#include <stdio.h>

typedef struct LinkListNode{
	int data;
	LinkListNode *next;
}LinkList;


bool Exit_Cycle_LinkList(LinkList *L){
	if(L == NULL)	return false;

	LinkList *p,*p1,*p2;

	p =(LinkList *)L;

	p1 = p->next;

	p2 = p1->next->next;

	while(p1 && p2){
		if(p1->data == p2->data) return true;
		else{
			p1 = p1->next;
			p2 = p1->next->next;
		}
	}
	return false;

}
