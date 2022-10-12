#include "dog.h"

/**
 * init_dog - initializes variables of type struct dog
 * @d: struct
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner
 *
 * Return: Nothing.
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
