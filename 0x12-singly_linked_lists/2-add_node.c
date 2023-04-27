#include "lists.h"

/**
 * _strlen - find string length
 * @str: string
 * Return: length
 */
int _strlen(const char *str)
{
	int str_len;

	for (str_len = 0; str[str_len] != '\0'; str_len++)
		{};
	return (str_len);
}

/**
 * add_node - add node in the start of a linked list
 * @head: linked-list
 * @str: new node data
 * Return: address of new element, or NULL if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *nw_node;

	if (str == NULL)
		return (NULL);
	if (strdup(str) == NULL) /*check if strdup malloc errored */
		return (NULL);

	nw_node = malloc(sizeof(list_t)); /* malloc for new node */
	if (nw_node == NULL)
		return (NULL);

	nw_node->str = strdup(str); /* set node values */
	nw_node->len = _strlen(str);

	if (head == NULL)
		nw_node->next = NULL;
	else
		nw_node->next = *head;

	*head = nw_node; /* set head to point to new node */

	return (nw_node);
}

