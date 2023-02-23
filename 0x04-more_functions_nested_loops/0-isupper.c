#include"main.h"

/**
 * _isupper - Show if char is upper case or not
 *
 * @c: input char
 *
 * Return: 1 if upper 0 otherwise
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
