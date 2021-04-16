
#include <stdio.h>
class Fruit {
	public:virtual void peel() { printf("peeling a base class fruit\n");}
		   void slice();
		   void juice();
	private:
		   int weight,calories_per_oz;
};


class Apple:public Fruit {
	public:
			void peel() { printf("peeling an apple\n");} /* The Apple-specific method peel() wasn't called,the base class's peel() was ! */
			void make_candy_apple(float weight);
};

int main(){

/*
	Fruit *p;
	p = new Apple;
	p->peel();

	Fruit banana;
	banana.peel();
*/
	Apple apple;
	Fruit orange;

	Fruit *p;
	p = &apple;
	p->peel();

	p = &orange;
	p->peel();


	
	return 0;
}

/*
 * Single inheritance is usually implemented by having each object contain a pointer vptr to a vector vtbl of function pointers.
 * There is one of these vectors for each class,and there is one entry in the vector for each method in the class.In this way,
 * the implementation code is shared by all objects of a given class.The vector is laid out so that a given function pointer lies
 * at the same offset in the virtual tables for all subclasses of a class.Each ethod call can be mapped to a vtbl offset at 
 * compiletime.At runtime,the call is made indirectly through the ointer at the appropriate offset.Multiple inheritance requires a slightly 
 * more complicated scheme with another layer of indirection.If that didn't make sense,draw yourself a picture of it;it's the end of the 
 * line for this particular bus.
 */

