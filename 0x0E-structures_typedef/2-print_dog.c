#include "dog.h"
#include <stdio.h>

/**
 * print_dog - print dog struct
 *
 * @d: struct
*/

void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: ");
		d->name != NULL ? printf("%s\n", d->name) : printf("(nil)\n");
		printf("Age: %f\n", d->age);
		printf("Owner: ");
		d->owner != NULL ? printf("%s\n", d->owner) : printf("(nil)\n");
	}
}
