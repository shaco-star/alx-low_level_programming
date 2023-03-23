#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - sum of numbers
 *
 * @separator: separator between numbers
 * @n: number of parameters
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list numPtr;

	va_start(numPtr, n);

	for (i = 0; i < n; i++)
	{
		if (i != 0)
			printf(" ");
		printf("%d", va_arg(numPtr, int));
		if (i != n - 1)
			printf("%s", separator);
	}

	va_end(numPtr);
	printf("\n");

}
