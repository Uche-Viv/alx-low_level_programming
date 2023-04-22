#include <stdio.h>

/**
 * main - A program that will assign a random number to a variable
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int lowerCase = 'a';
	int upperCase = 'A';

	while
		(lowerCase <= 'z')
	{
	putchar(lowerCase);
	lowerCase += 1;
	}
	while (upperCase <= 'Z')
	{
	putchar (upperCase);
	upperCase += 1;
	}
	putchar('\n');
	return (0);
}
