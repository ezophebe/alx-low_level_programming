#include "lists.h"

/**
 *list_len - functn returns the numbers of elements in a linked list
 *@h: pointer ot head of node
 *Return: elem
 */

size_t list_len(const list_t *h)
{
	size_t elem = 0;

	while (h != NULL)
	{
		h = h->next;
		elem++;
	}
	return (elem);
}
