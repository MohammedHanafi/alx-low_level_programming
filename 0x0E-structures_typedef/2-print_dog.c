#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints the information of a struct dog
 * @d: pointer to the struct dog to print
 *
 * Description: This function prints the name, age and owner of a struct dog.
 * If the dog's name is NULL, print "(nil)" instead.
 * If the dog's owner is NULL, print "(nil)" instead.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";

	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
