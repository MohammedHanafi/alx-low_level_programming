#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: a pointer to a string to be converted.
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int k, r, m, len, g, digit;

	k = 0;
	r = 0;
	m = 0;
	len = 0;
	g = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (k < len && g == 0)
	{
		if (s[k] == '-')
			++r;

		if (s[k] >= '0' && s[k] <= '9')
		{
			digit = s[k] - '0';
			if (r % 2)
				digit = -digit;
			m = m * 10 + digit;
			g = 1;
			if (s[k + 1] < '0' || s[k + 1] > '9')
				break;
			g = 0;
		}
		k++;
	}

	if (g == 0)
		return (0);

	return (m);
}

/**
 * main - multiplies two numbers.
 * @argc: an integer indicating the number of arguments passed to the program.
 * @argv: an array of strings representing the arguments passed to the program.
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
