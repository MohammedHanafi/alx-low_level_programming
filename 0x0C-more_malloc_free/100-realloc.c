#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - Reallocates a memory block previously allocated by malloc() or
 * calloc(), changing its size to new_size bytes.
 * @ptr: A pointer to the memory block to reallocate.
 * @old_size: The current size of the memory block.
 * @new_size: The new size of the memory block, in bytes.
 *
 * Return: pointer to the newly allocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr1;
	char *old_ptr;
	unsigned int x;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	ptr1 = malloc(new_size);
	if (!ptr1)
		return (NULL);

	old_ptr = ptr;

	if (new_size < old_size)
	{
		for (x = 0; x < new_size; x++)
			ptr1[x] = old_ptr[x];
	}

	if (new_size > old_size)
	{
		for (x = 0; x < old_size; x++)
			ptr1[x] = old_ptr[x];
	}

	free(ptr);
	return (ptr1);
}
