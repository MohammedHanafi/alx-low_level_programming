#include "main.h"
/**
 * _strchr - the Entry point
 * @s: a pointer to a string
 * @c: a character to be searched in the string
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	int j = 0;

	for (; s[j] >= '\0'; j++)
	{
		if (s[j] == c)
			return (&s[j]);
	}
	return (0);
}
