#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: The destination string to which the source string will be appended.
 * @src: The source string to be appended to the destination string.
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int b;
	int n;

	b = 0;
	while (dest[b] != '\0')
	{
		b++;
	}
	n = 0;
	while (src[n] != '\0')
	{
		dest[b] = src[n];
		b++;
		n++;
	}

	dest[b] = '\0';
	return (dest);
}
