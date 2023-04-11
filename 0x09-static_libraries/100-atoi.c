#include "main.h"

/**
 * _atoi - convert a string into an integer.
 *
 * @n: the string to use.
 *
 * Return: integer.
 */

int _atoi(char *n)
{
	int sign = 1, j = 0;
	unsigned int res = 0;

	while (!(n[j] <= '9' && n[j] >= '0') && n[j] != '\0')
	{
		if (n[j] == '-')
			sign *= -1;
		j++;
	}
	while (n[j] <= '9' && (n[j] >= '0' && n[j] != '\0'))
	{
		res = (res * 10) + (n[j] - '0');
		j++;
	}
	res *= sign;
	return (res);
}
