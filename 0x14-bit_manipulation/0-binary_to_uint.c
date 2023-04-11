#include"main.h"

/**
 * binary_to_uint - convert string of binary to decimal
 *
 * @b: string
 *
 * Return: number or 0 if NULL or fail
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;

	if (!b)
		return (0);
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		num = num * 2 + (*b++ - '0');
	}
	return (num);
}

