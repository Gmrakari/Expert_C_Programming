
#include <stdio.h>
#include <time.h>
#include <sys/types.h>
#include <sys/stat.h>

/* Convert the source file timestamp into a localized date string */
char *localized_time(char * filename){
	struct tm *tm_ptr;
	struct stat stat_block;
	char buffer[120];

	/* get the sourcefile's timestamp in time_t format */
	stat(filename,&stat_block);

	/* convert UNIX time_t into a struct tm holding local time */

	tm_ptr = localtime(&stat_block.st_mtime);

	/* convert the tm struct into a string in local format */
	strftime(buffer,sizeof(buffer),"%a %b %e %T %Y",tm_ptr);

	return buffer;
}

int main(){
	
	
}

//The are several possible solution to this problem


return a pointer to a string literal,Example

char *func() { return "Only works for simple strings."}


2. User a static array Example

char *func(){
	static char buffer[20];
	...
	return buffer;
}

3.Explicitly allocate some memory to hold the return value.Example

char *func(){
	char *s = malloc(120)l

	...

	return s;
}

4.Probably the best solution is to require the caller to allocate the memory to hold the return value.For safety,provide a count of the size of the buffer (just as fgets() requires in the standard library)

		void func(char *result,int size){

			...
		strncpy(result,"That'd be in the data segment,Bob",size);
		}
		
		buffer = malloc(size);
		func(buffer,size);
		
		...

		free(buffer);

	
