

char (*j)[20];/* j is a pointer to an array of 20 char */

j = (char (*)[20])malloc(20);


const int * grape;
int const * grape;
int * const grape_jelly;

The last of these cases makes the pointer read-only,
whereas the other two make the object that it point at read-only;

the object and what it points at might be constant
//对象和指针都是只读的

const int * const grape_jam;
int const * const grape_jam;


char * const *(*next)();

a function returning a pointer to a function is allowed:int(* fun())();
a function returning a pointer to an array is allowed:int (* foo())[];
an array holding pointers to functions is allowed:int (*foo[])()
an array can hold other arrays,so we can frequently see int foo[][]


A struct thus has the general form:

struct optional_tag{
	type_1 identifier_1;
	type_2 identifier_2;
	...
	type_N identifier_N;
}optional_variable_definitions;

struct date_tag{
	short dd,mm,yy;
}my_birthday,xmax;

struct date_tag easter,groundhog_day;

struct pid_tag{
	unsigned int inactive:1;
	unsigned int 		:1;
	unsigned int refcount:6;
	unsigned int 		:1;
	unsigned int 		:0;
	short pid_id;
	struct pid_tag *link;
};


struct veg { int weight,price_per_ld};

struct veg onion,radish,turnip;

rather than

struct veg { int weight,price_per_ld;}onion,radish,trunip;

/* array inside a struct */
struct s_tag { int a[100];};

struct s_tag { int a[100];};
struct s_tag orange,lime,lemon;
struct s_tag twofold(struct s_tag s){
	int j;
	for(j = 0; j < 100;j++) s.a[j] *= 2;
	return s;
}

main(){
	int i;;
	for(i = 0; i < 100;i++) lime.a[i] = 1;
	lemon = twofold(lime);
	orange = lemon;
}

struct node_tag{
		int datum;
		strtuct node_tag *next;
};
struct node_tag a,b;
a.nxet = &b;
a.next->next = NULL;

