#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the program.
 * @argc: an integer indicating the number of arguments passed to the program.
 * @argv: an array of strings representing the arguments passed to the program.
 *
 * Return: Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}