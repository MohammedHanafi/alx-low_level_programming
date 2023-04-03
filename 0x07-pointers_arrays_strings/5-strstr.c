#include "main.h"
/**
 * _strstr - locates a substring within a string
 * @haystack: The string to search in
 * @needle: The string to search for
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *k = haystack;
		char *q = needle;

		while (*k == *q && *q != '\0')
		{
			k++;
			q++;
		}

		if (*q == '\0')
			return (haystack);
	}

	return (0);
}
