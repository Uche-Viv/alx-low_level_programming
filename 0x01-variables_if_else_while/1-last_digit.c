#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Entry point
*
*Return: 0 on success
*/
int main(void)
{
	int n;			
	int lastnum
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = % 10;
	if (lastnum > 5)
	{
	printf("Last digit o %d is %d and is greater than 5\n", n, lastnum);
	}
	else if (lastnum == 0)
	{ 
	printf("Last digit of %d i %d and is 0\n", n, lastnum);
	}
	else if (lastnum < 6 && lastnum != 0)
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastnum);
	}
	return (0);
}
