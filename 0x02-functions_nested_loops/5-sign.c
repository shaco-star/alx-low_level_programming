#include"main.h"

/**
 * print_sign - Check if number is zero, greater than zero or less than
 *
 * @n: Is the number argument
 *
 * Return: 1 is greater than zero, 0 if zero or -1 if
 * less than zero
 *
*/

int print_sign(int n)
{
	if (n == 0)
	{
		_putchar(0 + '0');
		return (0);
	}
	else if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
