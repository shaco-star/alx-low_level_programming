#include"main.h"

/**
 * _isalpha - Function that check if input is alphabet or not
 *
 *
 * @c: is the argument of the function
 *
 * Return: 1 if input is alphabet, 0 otherwise
 *
*/

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	return (0);
}


