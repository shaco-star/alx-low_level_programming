#include "main.h"

/**
 * print_name - print a name
 *
 * @name: name that will be printed
 * @f: pointer to fucntion
*/

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
