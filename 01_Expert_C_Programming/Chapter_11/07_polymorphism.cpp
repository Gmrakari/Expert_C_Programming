

#include <stdio.h>

class Fruit{
	public:void peel() {printf("peeling a base class fruit \n");}
		  void slice();
		  void jucie();
	private:int weight,calries_per_oz;
};

class Apple:public Fruit {
	public:
			void peel() { printf("peeling an apple\n");} /* The Apple-specific method peel() wasn't called,the base class's peel() was ! */
			void make_candy_apple(float weight);
};

int main(){
	Fruit banana;

	banana.peel();
	
	Fruit *p;
	p = new Apple;
	p->peel();			/* using Fruit peel() */

	return 0;

}
