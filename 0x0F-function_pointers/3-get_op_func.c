#include "3-calc.h"
#include <stddef.h>

/**
 * get_op_func - array of op
 *
 * @s: pointer to char argument
 *
 * Return: op function
*/

int (*get_op_func(char *s))(int, int)
{
	int i = 0;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_add},
		{"*", op_add},
		{"/", op_add},
		{"%", op_add},
		{NULL, NULL}
	};

	while (i < 5)
	{
		if (*s == *ops[i].op)
			return (ops[i].f);
		i++;
	}

	return (NULL);
}
