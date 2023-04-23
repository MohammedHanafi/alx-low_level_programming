#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - iterates over an array and apply a function to each element
 * @array: array to iterate over
 * @size: number of elements in the array
 * @action: pointer to the function to apply to each element
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int z;

	if (array == NULL || action == NULL)
		return;

	for (z = 0; z < size; z++)
	{
		action(array[z]);
	}
}
