#include "main.h"

/**
 * get_bit - get bit at @index
 *
 * @n: decimal number
 * @index: index of bit that we will get
 *
 * Return: bit at @index or -1 if fail
*/

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (1);
	return ((n >> index) & 1);
}
