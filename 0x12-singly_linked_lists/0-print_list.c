#include "lists.h"

/**
 * print_list - print the elements of list_t
 * @h: linked list
 * Return: number of nodes in linked list
 */

size_t print_list(const list_t *h)
{
	size_t cnt = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		cnt++;
		h = h->next;
	}

	return (cnt);
}