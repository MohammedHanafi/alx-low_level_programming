#include "main.h"

/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int r = 0;
	int f = 0;

	while (*(src + r) != '\0')
	{
		r++;
	}
	for ( ; f < r ; f++)
	{
		dest[f] = src[f];
	}
	dest[r] = '\0';
	return (dest);
}
