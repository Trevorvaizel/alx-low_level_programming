#include "dog.h"
#include <stdlib.h>
/**
 *new_dog - Create new dog with struct
 *@name: Dog's name
 *@age: Dog's age
 *@owner: Dog's owner
 *Return: Pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggy;

	doggy = malloc(sizeof(dog_t));
	if (doggy == NULL)
		return (NULL);
	doggy->name = name;
	doggy->age = age;
	doggy->owner = owner;

	return (doggy);
}
