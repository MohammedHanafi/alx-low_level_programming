#include "function_pointers.h"
/**
 * int_index - searche for an int in an array and return the index of the first
 * @array: the array to search
 * @size: the size of the array
 * @cmp: a pointer to the function to be used to compare values
 * Return: the index of the first element for which cmp does not return 0,
 * or -1 if all
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int z;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (z = 0; z < size; z++)
	{
		if (cmp(array[z]))
			return (z);
	}
	return (-1);
}
