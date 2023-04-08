#include"main.h"
#include <math.h>

/**
 * str_to_int - convert string to int
 *
 * @str: string
 *
 * Return: number or 0 if str is not 0 or 1
*/



unsigned int str_to_int(char *str)
{
	int result = 0, i;

	if (str == NULL)
		return (0);

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] - '0' != 0 && str[i] - '0' != 1)
			return (0);
		result = result * 10 + str[i] - '0';
	}
	return (result);
}

/**
 * binary_to_uint - convert string of binary to decimal
 *
 * @b: string
 *
 * Return: number or 0 if NULL or fail
*/

unsigned int binary_to_uint(const char *b)
{
	int dec = 0, i = 0, rem, n = str_to_int(b);

	if (n == 0)
		return (0);
	while (n != 0)
	{
		rem = n % 10;
		n /= 10;
		dec += rem * (1 << i);
		++i;
	}
	return (dec);

}

