/* book.c -- 仅包含一本书的图书目录 */
#include<stdio.h>
#define MAXTITL 41
#define MAXAUTL 31
struct book
{
	char title[MAXTITL];
	char author[MAXAUTL];
	float value;

};
int main(void)
{
	struct book library;
	printf("Please enter the title of the book:\n");
	gets(library.title);
	printf("Now enter the author:\n");
	gets(library.author);
	printf("Now enter the value:\n");
	scanf_s("%f", &library.value);
	printf("%s by %s:$%.2f\n", library.title, library.author, library.value);
	printf("Done!\n");
	return 0;
}
