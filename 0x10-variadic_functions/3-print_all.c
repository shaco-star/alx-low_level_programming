#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - print anything
 *
 * @format: agument type
*/

void print_all(const char * const format, ...)
{
	unsigned int i, flag;
	va_list args;
	char *str;

	va_start(args, format);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				flag = 0;
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				flag = 0;
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				flag = 0;
				break;
			case 's':
				str = va_arg(args, char*);
				if (str)
					printf("%s", str);
				else
					printf("(nil)");
				flag = 0;
				break;
			default:
				flag = 1;
				break;
		}
		if (format[i + 1] != '\0' && flag == 0)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(args);
}
