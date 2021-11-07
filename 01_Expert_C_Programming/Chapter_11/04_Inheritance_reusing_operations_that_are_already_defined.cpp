

class Fruit {
	public:
			peel();
			slice();
			juice();
	private:
			int weight,calories_per_oz;
};

class Apple:public Fruit { 
	public:
			void make_candy_apple(float weight);
			void bob_for(int tub_id,int number_of_attempts);
};

Apple teachers;


