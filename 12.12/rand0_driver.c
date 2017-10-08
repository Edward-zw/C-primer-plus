#include<stdio.h>
extern void srand1(unsigned int x);
extern int rand0(void);

int main(void)
{
	int count;
	unsigned seed;
	printf("Please enter your choice for seed.\n");
	while (scanf_s("%u", &seed) == 1)
	{
		srand1(seed);
		for (count = 0; count < 5; count++)
			printf("%hd\n", rand0());
		printf("Enter next seed (q to quit):\n");

	}
	printf("Done!\n");
	
	return 0;
}
