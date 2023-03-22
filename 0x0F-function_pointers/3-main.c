#include "3-calc.h"
#include <stdio.h>
#include <string.h>
#include <stlib.h>

/**
 * main - program entry
 *
 * @argc: lenght of argument
 * @argv: array of argument
 *
 * Return: 0 success
*/

int main(int argc, char **argv)
{
	int n1, n2;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	n1 = atoi(argv[1]);
	op = atoi(argv[2]);
	n2 = atoi(argv[3]);

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*op == '\\' || op == '%') && n2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(op)(n1, n2));

	return (0);
}
