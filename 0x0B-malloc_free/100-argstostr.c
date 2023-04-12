#include "main.h"
#include <stdlib.h>
/**
 * argstostr - takes in a count and a double pointer array, and returns
 * a concatenated string of all the strings in the array.
 * @ac: The count of the number of strings in the array.
 * @av: The double pointer array containing the strings to be concatenated.
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int j, k, n = 0, m = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (j = 0; j < ac; j++)
	{
		for (k = 0; av[j][k]; k++)
			m++;
	}
	m += ac;

	str = malloc(sizeof(char) * m + 1);
	if (str == NULL)
		return (NULL);
	for (j = 0; j < ac; j++)
	{
	for (k = 0; av[j][k]; k++)
	{
		str[n] = av[j][k];
		n++;
	}
	if (str[n] == '\0')
	{
		str[n++] = '\n';
	}
	}
	return (str);
}
