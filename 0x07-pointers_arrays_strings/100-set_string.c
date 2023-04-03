#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: Pointer to pointer that will be updated to point to a new char
 * @to: Pointer to the char that s will point to
 */

void set_string(char **s, char *to)
{
	*s = to;
}
