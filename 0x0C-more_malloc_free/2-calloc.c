#include <stdlib.h>
#include "main.h"

/**
 * *_memset - Fills the first n bytes of the memory area pointed to by s
 * with the constant byte b.
 * @s: Pointer to the memory area to be filled.
 * @b: The value to be set. The value is passed as an int, but the function
 * fills the memory with the unsigned char conversion of this value.
 * @n: Number of bytes to be filled.
 *
 * Return: A pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int z;

	for (z = 0; z < n; z++)
	{
		s[z] = b;
	}

	return (s);
}

/**
 * *_calloc - Allocate memory for an array of nmemb elements of size bytes each
 * @nmemb: The number of elements to allocate memory for.
 * @size: The size of each element in bytes.
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}
