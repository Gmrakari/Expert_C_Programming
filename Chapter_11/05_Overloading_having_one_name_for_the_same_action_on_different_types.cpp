
double e,g,g;

int i,j,l;

e = f + g;

i = j + k;

class Fruit {
	public:
			void peel();
			slice();
			jucie();
			int operator+(Fruit &f);
	private:int weightcalories_per_oz;
};

int Fruit::operator+(Fruit &f){
	printf("calling fruit addition\n");

	return weight + f.weight;
}

Apple apple;
Fruit orange;

int ounces = apple + orange;


