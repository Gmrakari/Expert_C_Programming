#include <stdio.h>

network code(){
	switch(line){
		case THING1:
			doit1();
			break;
		case THING2:
			if(x == STUFF){
				do_first_stuff();

				if(y == OTHER_STUFF)
						break;
				do_later_stuff();
			}//the code destination is jump to here
			initialize_modes_pointer();
			break;
		default:
			processing();
	}//the fact of switch was jump to here
	use_modes_pointer();	//cause to mode_pointer has not initalize
}

int main(){
	

	return 0;
}
