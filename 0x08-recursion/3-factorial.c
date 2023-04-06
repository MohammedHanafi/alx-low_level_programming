#include "main.h"

/**
 * factorial - the factorial of a given number recursively.
 * @n: The number to compute the factorial of
 *
 * Return: factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
