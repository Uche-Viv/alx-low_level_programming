#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - To generate a random number
*
*Return: 0 on success
*/
int main(void)
{
	int n;
	int lastnum;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	lastnum = n % 10;

	printf("lastnum of %d is %d ", n, lastnum);

	if (lastnum > 5)
	{
		printf("and is greater than 5\n");
	}
	else if (lastnum == 0)
	{
		printf("and is 0\n");
	}
	else
	{
		printf("and is less than 6 and not 0\n");
	}
	return (0);
}
