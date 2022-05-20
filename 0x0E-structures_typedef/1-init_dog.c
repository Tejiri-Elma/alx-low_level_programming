#include "dog.h"
#include <stdio.h>
/**
 * init_dog - function that initialize a variable of type struct dog
 * @d: struct dog
 * @name: member of struct dog
 * @age: second member of struct dog
 * @owner: third member of struct dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	{
		(*d).name = name;
		d->age = age;
		d->owner = owner;
	}
}
