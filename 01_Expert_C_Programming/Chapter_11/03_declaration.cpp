

return-type functionname(parameters) {...};

return-type Classname:: functionname(parameters) {...};

the :: is called "the scope resolution operator." The identifier that precedes it is a class
to look in.If there's no preceding identifier,it means global scope.If the implementation of 
peel() is put inside the class,it might look like this:

class Fruit {
	public:
			void peel(){
				printf("in peel");
			}
			slice();
			juice();
	private:
			int weight,calories_per_oz;
};

class Fruit {
	public:
			void peel();
			slice();
			jucie();
	privated:
			int weight,calories_per_oz;
};

void Fruit::peel() { printf("in peel");}

class Fruit {
	public: void peel();
	private:int weight,calories_per_oz;
};

void Fruit::peel(){
	printf("this ptr = %p",this);
	this->weight--;
	weight--;
}


Fruit apple;
printf("address of apple = %x",&apple);
apple.peel();

Classname :: Classname (arguments) { ... };

class Fruit {
	public:
			peel();
			slice();
			juice();
			Fruit(int i,int j);			//constructor
			~Fruit();					//destructor
	private:
			int weight,calories_per_oz;
};

// constructor body
Fruit::Fruit(int i,int j){
	weight = i;
	calories_per_oz = j;
}

//object declarations are initialized by the constructor
Fruit melon(4,5),banana(12,8);




