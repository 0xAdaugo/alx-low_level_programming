#include "lists.h"

/**
 * list_len - Returns the number of elements in a linked lists
 * @h: Pointer to the head of the list.
 * Return: Number of elements in a linked list.
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}

	return (n);
}
