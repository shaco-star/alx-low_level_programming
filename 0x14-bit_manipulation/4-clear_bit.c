#include "main.h"

/**
 * clear_bit - clear bit at @index
 *
 * @n: decimal number
 * @index: index of bit that we will clear
 *
 * Return: bit at @index or -1 if fail
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(*n) * 8)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
