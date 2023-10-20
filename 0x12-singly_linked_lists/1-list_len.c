#include <stdlib.h>
#include "lists.h"

/**
 * list_len - prints elements of list.
 * @h: pointer to the head of the node.
 *
 * Return: size of elements in the list.
 */

size_t list_len(const list_t *h)
{
	int c = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		c++;
		h = h->next;
	}
	return (c);
}
