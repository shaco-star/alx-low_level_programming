#include"main.h"

/**
 * _isdigit - check if input is digit or not
 *
 * @c: input number
 *
 * Return: 1 if digit 0 otherwise
*/

int _isdigit(int c)
{
	if (c >= 48 || c <= 57)
		return (1);
	else
		return (0);
}
