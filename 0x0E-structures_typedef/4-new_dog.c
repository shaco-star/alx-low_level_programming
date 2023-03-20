#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog - print dog struct
 *
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner
 *
 * Return: pointer new dog struct
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	int i, nameL = 0, ownerL = 0;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	while (name[nameL] != '\0')
		nameL++;
	while (owner[ownerL] != '\0')
		ownerL++;
	dog->name = malloc(sizeof(char) * (nameL + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (i = 0; i < nameL + 1; i++)
		dog->name[i] = name[i];
	dog->age = age;
	dog->owner = malloc(sizeof(char) * (nameL + 1));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < ownerL + 1; i++)
		dog->owner[i] = owner[i];

	return (dog);
}
