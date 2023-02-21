#include"main.h"

/**
 * print_to_98 - Function that print from n to 98
 *
 * @n: int argument
 *
 *
*/

void print_to_98(int n)
{
	int start;

	if (n > 98)
		for (start = n; start > 98; start--)
			printf("%d, ", start);
	else
		for (start = n; start < 98; start++)
			printf("%d, ", start);

	printf("98\n");


}

