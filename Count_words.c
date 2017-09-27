#include<stdio.h>
#include<ctype.h>
#include<stdbool.h>
#define STOP '|'
int main(void)
{
	char c;		//读入字符
	char prev;	//读入前一个字符
	long n_chars = 0L;	//字符数
	int n_lines = 0;	//行数
	int n_words = 0;	//单词数
	int p_lines = 0;	//不完整的行数
	bool inword = false;	//如果字符c在一个单词中，则inword为True
	prev = '\n';
	printf("Enter text to be analyzed (| to terminate):\n");

	while ((c = getchar()) != STOP)
	{
		n_chars++;
		if (prev == '\n')	//如果输入的字符是一个换行符则行数加1
			n_lines++;
		if (!isspace (c) && !inword)	//如果输入的字符不是一个空格并且也不在一个单词里面
		{
			n_words++;	//单词数加1
			inword = true;
		}
		if (isspace (c) && inword)	//单词结尾	
			inword = false;
		prev = c;

	}
	if (prev != '\n')	//统计不完整行
		p_lines = 1;
	printf("characters = %ld, words = %d, lines = %d.", n_chars, n_words, n_lines);
	printf("partial lines = %d\n", p_lines);
	return 0;

}
