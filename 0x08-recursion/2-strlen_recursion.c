#include"main.h"

/**
 * _strlen_recursion - print a lenght of a string
 *
 * @s: string
 *
 * Return: lenght of a string
*/

int _strlen_recursion(char *s)
{

	if (*s != '\0')
		return (1 + _strlen_recursion(s++));
	else
		return (0);
}
