#include "main.h"
/**
 * _memset - replace a block of memory with a specific value
 * @s: the starting address of the memory block to be filled
 * @b: the desired value to be set in the memory block
 * @n: the number of bytes to be filled with the desired value
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int j = 0;

	for (; n > 0; j++)
	{
		s[j] = b;
		n--;
	}
	return (s);
}
