#include "lists.h"
#include <stdio.h>

/**
 * print_list - Prints the elements of a list.
 * @h: Pointer to the head of the list.
 * Return:Number of nodes in the list.
 */

size_t print_list(const list_t *h)
{
	size_t l_node;

	l_node = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		l_node++;
	}
	return (l_node);
}
