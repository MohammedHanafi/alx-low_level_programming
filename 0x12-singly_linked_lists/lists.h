#ifndef LISTS_H
#define LISTS_H

/**
 * struct list_s - It contains three members:
 * @str: a dynamically allocated string
 * @len: the length of the string
 * @next: a pointer to the next node in the list
 *
 * Description: This is a structure for a singly linked list node,
 * which is used in Holberton project.
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

void free_list(list_t *head);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);

#endif
