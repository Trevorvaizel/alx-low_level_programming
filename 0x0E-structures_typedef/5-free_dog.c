#include "dog.h"
#include <stdlib.h>

/**
 *free_dog - Free dog memory
 *@d: Pointer to dog
 */
void free_dog(dog_t *d)
{
	free(d);
}
