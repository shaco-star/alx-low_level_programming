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
		d->name != NULL ? printf("%s", d->name) : printf("(nil)");
		printf("Age: ");
		d->age != NULL ? printf("%f", d->age) : printf("(nil)");
		printf("Owner: ");
		d->owner != NULL ? printf("%s", d->owner) : printf("(nil)");
	}
}
