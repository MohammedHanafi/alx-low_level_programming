#include "main.h"
/**
 *_memcpy - to copy a specified number of bytes from one memory area to another
 *@dest: memory location where the copied bytes will be stored
 *@src: memory location from where the bytes will be copied
 *@n: the number of bytes to be copied
 *
 *Return: copied memory with n bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int j = n;

	for (; i < j; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
