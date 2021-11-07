#include <stdio.h>

int main(int argc,char **argv)
	char *argv[];
{
	char line[512];

	gets(line);

	//char *fgets(char *s,int size,FILE *stream);
	
	/*
	 * reads int at most one less than size characters from stream and
	 * stroes them into the buffer pointed to by s.Reading stops after an		EOF or a newline.If a newline is read,it is stored into the buffer		A terminating null byte('\0') is stored after the last character in 	the buffer
	 *
	 */
	
	/*
	 * the input stream is referred to as "standard input"
	 * the output stream is referred to as "standard output"
	 * and the error stream is referred to as "standard error"
	 *
	 */

	if(fgets(line,sizeof(line),stdin) == NULL)
		exit(1);
}
