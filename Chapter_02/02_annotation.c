


int hashval = 0;

/*	PJW hash function from "Compilers:Principles,Techniques,and Tools"
 *	by Aho,Sethi,and Ullman,Second Edition.
 */
 	while(cp < bound)
	{
		unsigned long overflow;
		
		hashval = (hashval << 4) + *cp++;
		if((overflow = hashval & (((unsigned long) 0xF) << 28 )) != 0)
			hashval ^= overflow | (overflow >> 24);
	}

	hashval %= ST_HASHSIZE; /*choose start bucket*/
	
	/* Look through each table,in turn,for the name.If we fail,
	 * save the string,enter the string's pointer,and return it.
	 */
	
	for(hp = &st_ihashl; ; hp = hp->st_hnext){
			int probeval = hashval;	/* next probe value */
}
