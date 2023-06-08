#include "main.h"

/**
 * get_bit - Retrieve the value of a specific bit
 * at a given index in decimal number
 *
 * @n: The decimal number from which to retrieve the bit value
 * @index: index of the bit to retrieve
 *
 * Return: value of the bit or -1 if the index is out of range
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
