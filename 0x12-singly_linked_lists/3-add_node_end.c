#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - add node to the end of the linked list
 * @head: point to a pointer to the head node
 * @str: point to the string
 *
 * Return: point to new head of list
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *down;
	int s;
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

	s = 0;
	while (str[s])
	{
		s++;
	}

	new->len = s;
	new->str = cp_s;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		down = *head;
		while (down->next != NULL)
			down = down->next;
		down->next = new;
	}

	return (new);
}
