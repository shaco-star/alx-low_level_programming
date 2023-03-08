#include"main.h"

/**
 * _sqrt_recursion - returns natural square root of a number
 *
 * @n: number that we want to find square root of it
 *
 * Return: root of a number @n
*/

int _sqrt_recursion(int n)
{
	return (_sqrt_helper(n, 1));
}

/**
 * _sqrt_helper - helper function to guess root number
 *
 * @n: number that we want to find square for it
 * @i: guess number
 *
 * Return: root if found it or -1 if it doesnt have root
*/


int _sqrt_helper(int n, int i)
{

	if (i * i == n)
		return (i);
	else if ((i * i) > n)
		return (-1);
	else
		return (_sqrt_helper(n, i + 1));
}
