#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * new_dog - creates new dog
 * @name: member of the struct
 * @age: member of the struct
 * @owner: member of the struct
 * Return: dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int nameLen, ownerLen, i;
	dog_t *doggie;

	doggie = malloc(sizeof(dog_t));
	for (nameLen = 0; name[nameLen] != '\0'; nameLen++)
		continue;
	for (ownerLen = 0; owner[ownerLen] != '\0'; ownerLen++)
		continue;
	if (doggie == NULL)
		return (NULL);
	doggie->name = malloc(sizeof(doggie->name) * nameLen);
	if (doggie->name == NULL)
	{
		free(doggie);
		return (NULL);
	}
	for (i = 0; i <= nameLen; i++)
		doggie->name[i] = name[i];
	doggie->age = age;
	doggie->owner = malloc(sizeof(doggie->owner)) * ownerLen;
	if (doggie->owner == NULL)
	{
		free(doggie->name);
		free(doggie);
		return (NULL);
	}
	for (i = 0; i <= ownerLen; i++)
		doggie->owner[i] = owner[i];
	return (doggie);
}
