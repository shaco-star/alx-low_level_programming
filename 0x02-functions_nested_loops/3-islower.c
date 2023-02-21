#include"main.h"

/**
 * _islower - Function that check if char is lowercase or
 * uppercase
 *
 * @c: is the argument of the function
 *
 * Return: 1 if char is lowercase, 0 otherwise
 *
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}


