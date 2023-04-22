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
	printf("last digit of %d is ", n);
	lastnum = n % 10;
	if (lastnum > 5)
	{
	printf("%d and is greater than 5\n", lastnum);
	}
	else if ((lastnum < 6) && (lastnum < 0))
	{
	printf("%d and is less than 6 and not 0\n", lastnum);
	}
	else
	{
	printf("%d and is 0\n", lastnum);
	}
	return (0);
}
