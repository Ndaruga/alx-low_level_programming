#include "lists.h"

/**
 * _strlen - string length
 * @str: string
 * Return: length of string
 */
int _strlen(const char *str)
{
	int str_len;

	for (str_len = 0; str[str_len] != '\0'; str_len++)
		;
	return (str_len);
}

/**
 * add_node_end - add node to the end of the linked list
 * @head: linked list start
 * @str: data for new node
 * Return: addr of new element, or NULL if failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nw_node, *temp; /* create new node */

	if (str == NULL) /* validate input */
		return (NULL);
	if (strdup(str) == NULL) /* check if malloc errored */
		return (NULL);

	nw_node = malloc(sizeof(list_t)); /* malloc for new node */
	if (nw_node == NULL)
		return (NULL);

	nw_node->str = strdup(str); /* set node values */
	nw_node->len = _strstr_len(str);
	nw_node->next = NULL;

	if (*head == NULL) /* if no list nodes, set nw_node to beginning */
		*head = nw_node;
	else
	{
		temp = *head;

		while (temp->next != NULL)
			temp = temp->next;
		temp->next = nw_node;
	}

	return (nw_node);
}
