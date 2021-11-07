

//Alignment means that data items can only be stored at an address that is a multiple of their size.

//By forcing each individual memory access to remain in one cache line or on a single page,we
//greatly simplify ( and therefore speed up ) hardward like cache controllers and memory management units.

//Page and cache sizes are carefully designed so that eeping the alignment rule will ensure that no atomic data item
//spills over a page or cache block boundray

union{
	char a[10];
	int i;
}u;

int *p = (int *)&(u.a[1]);
*p = 17;	/* the misaligned addr in p causes a bus error */


