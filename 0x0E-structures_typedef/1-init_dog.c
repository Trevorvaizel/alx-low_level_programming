#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * init_dog - initializes 
 * @d: dog
 * @name: name
 * @age: age
 * @owner
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
