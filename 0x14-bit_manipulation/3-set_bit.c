#include "main.h"

/**
 * set_bit - set bit at @index
 *
 * @n: decimal number
 * @index: index of bit that we will set
 *
 * Return: bit at @index or -1 if fail
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(*n) * 8)
		return (-1);
	*n |= 1UL << index;
	return (1);
}
