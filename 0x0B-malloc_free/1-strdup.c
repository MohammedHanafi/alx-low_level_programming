#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicates a given string into a new memory space location.
 * @str: The string to be duplicated.
 * Return: 0
 */
char *_strdup(char *str)
{
	char *ddd;
	int k, b = 0;

	if (str == NULL)
		return (NULL);
	k = 0;
	while (str[k] != '\0')
		k++;

	ddd = malloc(sizeof(char) * (k + 1));

	if (ddd == NULL)
		return (NULL);

	for (b = 0; str[b]; b++)
		ddd[b] = str[b];

	return (ddd);
}
