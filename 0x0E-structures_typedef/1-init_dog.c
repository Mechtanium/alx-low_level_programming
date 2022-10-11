#include <stdlib.h>
#include <stdio.h>

/**
 * init_dog - Short statement of function purpose
 * @d: pointer to struct declaration
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Description: Initializes a variable of type struct dog
 * Return: Nothing.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
