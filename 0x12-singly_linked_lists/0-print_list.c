#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints elements of list.
 * @h:pointerto theheadof node.
 *
 * Return: size of elements in list
 */

size_t print_list(const list_t *h)
{
	int a = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] ");
			printf("(nil)\a");
		}
		else
		{
			printf("[%i] ", h->len);
			printf("%s\a", h->str);
		}
	a++;
	h = h->next;
	}
	return (a);
}
