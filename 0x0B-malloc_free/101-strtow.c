#include <stdlib.h>
#include "main.h"

/**
 * count_word - is a helper function that counts the number
 * of words in a given string.
 * @s: The input string to be evaluated.
 *
 * Return: number of words
 */
static int count_words(char *str)
{
	int count = 0;
	int in_word = 0;

	while (*str)
	{
		if (*str == ' ')
		{
			in_word = 0;
		}
		else if (!in_word)
		{
			in_word = 1;
			count++;
	}
		str++;
	}

	return (count);
}
/**
 * **strtow - takes a string and splits it into individual words,
 * returning a pointer to an array of strings.
 * @str: The input string to be split.
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **words;
	int count;
	int x, y, z;

    	if (str == NULL || *str == '\0')
	return (NULL);

	count = count_words(str);

	words = malloc(sizeof(char *) * (count + 1));
	if (words == NULL)
	return (NULL);

	for (x = 0, y = 0; x < count; x++)
	{
	while (*str == ' ')
		str++;

	z = 0;
	while (str[z] && str[z] != ' ')
		z++;

	words[x] = malloc(sizeof(char) * (z + 1));
	if (words[x] == NULL)
	{
		for (x--; x >= 0; x--)
				free(words[x]);

			free(words);
			return (NULL);
	}

		for (z = 0; *str && *str != ' '; z++, str++)
			words[x][z] = *str;

		words[x][z] = '\0';
		y++;
	}

	words[x] = NULL;
	return (words);
}
