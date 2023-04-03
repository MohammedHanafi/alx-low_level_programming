#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of characters
 * @s: The string to be searched
 * @accept: The string containing the characters to search for
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
		int r;

		while (*s)
		{
			for (r = 0; accept[r]; r++)
			{
			if (*s == accept[r])
			return (s);
			}
		s++;
		}

	return ('\0');
}
