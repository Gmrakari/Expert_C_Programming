

/*
 * Date:2022-01-05 15:56
 * filename:01_simple.c
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_COLS 20
#define MAX_INPUT 1000

char *gets(char *s);

int read_cloumn_numbers(int columns[], int max);
void rearrange(char *output, char const *input, int n_cloumns, int const coluns[]);

int main(void) {
	int n_cloumns;
	int columns[MAX_COLS];
	char input[MAX_INPUT];
	char output[MAX_INPUT];

	n_cloumns = read_cloumn_numbers(columns, MAX_COLS);

	while( fgets(input, MAX_INPUT, stdin) != NULL ) { //不支持gets(char *s), 用fgets(char *s, int size, FILE *stream);
		printf("Original input: %s\n", input);
		rearrange(output, input, n_cloumns, columns);
		printf("Rearranged line:%s\n", output);
	}
	return EXIT_SUCCESS;
}

int read_cloumn_numbers(int columns[], int max) {
	int num = 0;
	int ch;

	while (num < max && scanf("%d", &columns[num]) == 1
			&& columns[num] >= 0) 
		num += 1;

	//确认已经读取的标号为偶数个，因为它们是以对的形式出现的
	if (num % 2 != 0) {
		puts("Last column number is not paired");
		exit(EXIT_FAILURE);
	}
	
	//丢弃该行中包含最后一个数字的那部分
	while ((ch = getchar()) != EOF && ch != '\n')
		;

	return num;
}

//处理输入行，将指定列的字符连接在一起，输出行以NUL结尾
void rearrange(char *output, char const *input, int n_cloumns, int const columns[]) {
	int col;
	int output_col;
	int len;

	len = strlen(input);
	output_col = 0;

	for (col = 0; col < n_cloumns; col += 2) {
		int nchars = columns[col + 1] - columns[col] + 1;

		//如果输入行结束或输出行数组已满，就结束任务
		if (columns[col] >= len || output_col == MAX_INPUT - 1)
			break;

		//如果输出行数据不够，只复制可以容纳的数据
		if (output_col + nchars > MAX_INPUT - 1)
			nchars = MAX_INPUT - output_col - 1;

		//复制相关的数据
		strncpy(output + output_col, input + columns[col], nchars);
		output_col += nchars;
		output[output_col] = '\0';
	}
} 
