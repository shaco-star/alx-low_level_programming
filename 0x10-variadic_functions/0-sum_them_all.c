#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sum of numbers
 *
 * @n: number of parameters
 *
 * Return: sum
*/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum, i;
	va_list numPtr;

	sum = 0;
	va_start(numPtr, n);

	for (i = 0; i < n; i++)
		sum += va_arg(numPtr, int);

	va_end(numPtr);

	return (sum);
}
