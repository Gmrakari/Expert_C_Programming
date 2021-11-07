


/* hash_file:Placeholder for more sophisticated future routine */

int hash_file(char *s){
	return 0;
}

/* find_file:Locate a previously created file desciptor or make a new
 * one if necessary */

find find_filename(char *s){
	int hash_value = hash_filename(s);
	file f;
	
	for(f = file_hash_table[hash_value]; f != NIL; f = f->flink){
		if(strcmp(f->fname,s) == SAME){
			return f;
		}
	}
	f = allocate_file(s);
	f->flink = file_hash_table[hash_value];
	file_hash_table[hash_value] = f;
	return f;
}


int hash_file(char *s){
		int length = strlen(s);
		return (length + 4 * (s[0] + 4 * s[length/2)) % FILE_HASH;

}
