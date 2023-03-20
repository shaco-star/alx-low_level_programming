#include "dog.h"

/**
 * init_dog - initialize struct
 *
 * @d: dog struct
 * @name: string name of dog
 * @age: float age of dog
 * @owner: name of owner of dog
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
