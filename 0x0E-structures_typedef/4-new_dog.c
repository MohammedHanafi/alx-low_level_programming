#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - Computes the length of a string.
 * @s: A pointer to a string.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	int z;

	z = 0;

	while (s[z] != '\0')
	{
		z++;
	}

	return (z);
}

/**
 * *_strcpy - copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest.
 * @dest: pointer to the buffer in which we copy the string
 * @src: string to be copied
 *
 * Return: pointer to the destination buffer
 */
char *_strcpy(char *dest, char *src)
{
	int len, z;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (z = 0; z < len; z++)
	{
		dest[z] = src[z];
	}
	dest[z] = '\0';

	return (dest);
}

/**
 * new_dog - Creates a new dog with the specified name, age, and owner.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Return: A pointer to the newly created dog (Success), NULL otherwise.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (len1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
