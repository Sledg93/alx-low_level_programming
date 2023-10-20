#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - add a node to the head of linked list
 * @head: point to a pointer to the head node.
 * @str: point to the string.
 *
 * Return: point to the new head list.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int e;
	char *cp_s;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	cp_s = strdup(str);
	if (cp_s == NULL)
	{
		free(new);
		return (NULL);
	}
	e = 0;
	while (str[e])
	{
		e++;
	}

	new->len = e;
	new->str = cp_s;
	new->next = *head;
	*head = new;

	return (*head);
}
