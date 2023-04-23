#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - calls a function to print a given name
 * @name: string to print
 * @f: pointer to function that prints the name
 * Return: nothing
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
