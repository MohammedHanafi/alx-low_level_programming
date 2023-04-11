#include "main.h"

/**
 * _isupper - a character is an uppercase letter.
 * @r: The character to be checked.
 *
 * Return: 0 or 1
 */

int _isupper(int r)
{
	if (r >= 'A' && r <= 'Z')
		return (1);
	else
		return (0);
}
