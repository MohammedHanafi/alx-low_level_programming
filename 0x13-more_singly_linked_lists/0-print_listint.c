#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list of type listint_t
 * @h: Pointer to the head of the linked list
 *
 * Return: The number of nodes in the linked list
 */
size_t print_listint(const listint_t *h)
{
	size_t num1 = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num1++;
		h = h->next;
	}

	return (num1);
}
