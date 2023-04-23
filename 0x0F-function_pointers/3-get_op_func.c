#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func - Determines the appropriate function to execute
 *               the requested operation.
 * @s: The operator passed as argument.
 *
 * Return: A pointer to the function that matches
 *         the given operator parameter.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};

	int z = 0;

	while (ops[z].op != NULL && *(ops[z].op) != *s)
		z++;

	return (ops[z].f);
}
