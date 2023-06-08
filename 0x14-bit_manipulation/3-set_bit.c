#include "main.h"

/**
 * set_bit -Set a specific bit at a given index to 1 in a decimal number
 *
 * @n: pointer to the decimal number to modify
 * @index: index of the bit to set to 1
 *
 * Return: 1 if the bit was set successfully, -1 if the index is out of range
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
