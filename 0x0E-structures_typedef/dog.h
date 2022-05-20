#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a new struct
 * @name: first member
 * @age: second member
 * @owner: third member
 * Description: this struct contains 3 elements
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
