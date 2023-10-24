#include "lists.h"

/**
 *get_nodeint_at_index - fuction returns the nth node of a list
 *@head: pointer to head
 *@index: the index to the nth node to be gotten
 *Return: the  nth node got
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n;

	for (n = 0; n < index; n++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
