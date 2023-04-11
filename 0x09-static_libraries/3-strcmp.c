#include "main.h"
/**
 * _strcmp - compare string values
 * @n1: input value
 * @n2: input value
 *
 * Return: n1[j] - n2[j]
 */
int _strcmp(char *n1, char *n2)
{
	int j;

	j = 0;
	while (n1[j] != '\0' && n2[j] != '\0')
	{
		if (n1[j] != n2[j])
		{
			return (n1[j] - n2[j]);
		}
	j++;
	}
	return (0);
}
