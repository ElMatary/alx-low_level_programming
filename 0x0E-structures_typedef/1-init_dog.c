#include "dog.h"

/**
 * init_dog - Initializes a variable of type struct dog
 *
 * @d: Pointer to the struct dog variable to initialize
 * @name: Pointer to a string containing the name of the dog
 * @age: Age of the dog
 * @owner: Pointer to a string containing the name of the owner
 *
 * Return: void
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
