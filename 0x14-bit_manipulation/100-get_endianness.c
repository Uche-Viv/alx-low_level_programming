#include "main.h"
/**
 * get_endianness -  Check the byte order of the machine
 * This function determines whether the machine uses
 * uses little-endian or big-endian byte order
 *
 * Return: 0 if the machine uses big-endian byte order,
 * 1 if it uses little-endian
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
