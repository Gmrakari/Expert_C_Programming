

union optional_tag{
	type1 identifier_1;
	type2 identifier_2;
	...
	type_N identifier_N;
}optional_variable_definitions;

struct creature{
	char has_backbone;
	char has_fur;
	short num_of_legs_in_excess_of_4;
};


union secondary_characteristics{
	char has_fur;
	short num_of_legs_in_excess_of_4;
};

struct creature{
	char has_backbone;
	union secondary_characteristics form;
};

union bits32_tag{
	int whole;
	struct {
		char c0,c1,c2,c3;
	}byte;
}value;




