#include "lists.h"

/**
 *listint_len - function returns the number of elements in a listt.
 *@h: head of node
 *Return: the number of elements (nodes)
 */

size_t listint_len(const listint_t *h)
{
	size_t countnum_of_nodes;

	if (h == NULL)
		return (0);

	for (countnum_of_nodes = 0; h != NULL; countnum_of_nodes++)
	{
		h = h->next; /** update head to point to he next node*/
	}
	return (countnum_of_nodes);
}
