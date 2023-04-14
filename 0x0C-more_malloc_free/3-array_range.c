#include <stdlib.h>
#include "main.h"

/**
 * *array_range - Creates an array of integers containing all the values
 * in the range [min, max], inclusive.
 * @min: The minimum value in the range.
 * @max: The maximum value in the range. This value also specifies the number
 * of elements in the returned array.
 *
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int x, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	for (x = 0; min <= max; x++)
		ptr[x] = min++;

	return (ptr);
}
