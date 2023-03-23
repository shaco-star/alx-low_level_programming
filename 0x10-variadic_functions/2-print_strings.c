#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - strings separated by @separator
 *
 * @separator: separator between strings
 * @n: number of parameters
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list strPtr;
	char *str;

	va_start(strPtr, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(strPtr, char *);
		if (str)
			printf("%s", str);
		else
			printf("(nil)");

		if (separator && i != n - 1)
			printf("%s", separator);
	}

	va_end(strPtr);
	printf("\n");

}
