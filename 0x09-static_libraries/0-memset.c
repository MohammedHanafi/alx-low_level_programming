#include "main.h"
/**
 * _memset - fills a block of memory with a specified value.
 * @j: The starting address of memory to be filled.
 * @i: The desired value value to be filled.
 * @k: The number of bytes to be changed.
 *
 * Return: changed array with new value for k bytes
 */
char *_memset(char *j, char i, unsigned int k)
{
	int m = 0;

	for (; k > 0; m++)
	{
		j[m] = i;
		k--;
	}
	return (j);
}
