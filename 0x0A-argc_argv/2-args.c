#include <stdio.h>
#include "main.h"

/**
 * main - prints all the arguments passed to it.
 * @argc: an integer indicating the number of arguments passed to the program.
 * @argv: an array of strings representing the arguments passed to the program.
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
