#include"main.h"

/**
 * is_prime_number - checks if a number is prime or not recursively
 * @n: input integer
 *
 * Return: 1 if n is prime, otherwise 0.
*/

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n == 2)
		return (1);

	return (is_prime_helper(n, 2));
}

/**
 * is_prime_helper - helper function that does the recursive computation
 * @n: input integer
 * @i: counter variable to check divisibility of n
 *
 * Return: 1 if n is prime, otherwise 0.
*/

int is_prime_helper(int n, int i)
{
	if (i > n / 2)
		return (1);
	if (n % i == 0)
		return (0);
	return (is_prime_helper(n, i + 1));
}

