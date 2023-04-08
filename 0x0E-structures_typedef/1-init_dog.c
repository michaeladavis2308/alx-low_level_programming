#include "dog.h"
#include <stdlib.h>
/**
 * init_dog-initializes a variable of type struct dog
 * @d: the variable initialised
 * @name:the name of dog
 * @age: age of dog
 * @owner:the dog's owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == 0)
		return;
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
