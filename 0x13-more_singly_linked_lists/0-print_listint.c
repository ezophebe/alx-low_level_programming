#include "lists.h"

/**
 *print_listint - function prints all the elements of a listint_t list.
 *@h: head of node
 *Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t countnum_of_nodes;

	if (h == NULL)
		return (0);

	for (countnum_of_nodes = 0; h != NULL; countnum_of_nodes++)
	{
		printf("%d\n", h->n);
		h = h->next; /** update head to point to he next node*/
	}
	return (countnum_of_nodes);
}
