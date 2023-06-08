
#include "main.h"

/**
 * clear_bit -  Clear a specific bit at a given index by
 * by setting it to 0 in a decimal number
 *
 * @n: pointer to the decimal number to modify
 * @index: index of the bit to clear
 *
 * Return: 1 if the bit was successfully cleared,
 *  -1 if the index is out of range
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
