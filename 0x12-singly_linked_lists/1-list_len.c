#include "lists.h"

/**
 * list_len - prints length of linked list (list_t)
 * @h: linked list
 * Return: No of nodes/elements (length) in linked list
 */

size_t list_len(const list_t *h)
{
	size_t cnt = 0;

	while (h != NULL)
	{
		cnt++;
		h = h->next;
	}

	return (cnt);
}
