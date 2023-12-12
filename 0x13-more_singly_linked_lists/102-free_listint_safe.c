#include "lists.h"

/**
 *free_listp2 - function frees node
 *@head: pointer to pointer(address) of head
 *Return: nothing
 */

void free_listp2(listp_t **head)
{
	listp_t *tempo;
	listp_t *c; /** current */

	if (head != NULL)
	{
		c = *head;
		while ((tempo = c) != NULL)
		{
			c = c->next;
			free(tempo);
		}
		*head = NULL;
	}
}

/**
 *free_listint_safe - function frees a list with a loop, go 2r once nd set
 *head to null
 *@h: pointer to the pointer of head
 *Return: The size of the list freed
 */

size_t free_listint_safe(listint_t **h)
{
	size_t nodess = 0;
	listp_t *p_head, *neww, *add;
	listint_t *c;

	p_head = NULL;
	while (*h != NULL)
	{
		neww = malloc(sizeof(listp_t));

		if (neww == NULL)
			exit(98);

		neww->p = (void *)*h;
		neww->next = p_head;
		p_head = neww;

		add = p_head;

		while (add->next != NULL)
		{
			add = add->next;
			if (*h == add->p)
			{
				*h = NULL;
				free_listp2(&p_head);
				return (nodess);
			}
		}
		c = *h;
		*h = (*h)->next;
		free(c);
		nodess++;
	}
	*h = NULL;
	free_listp2(&p_head);
	return (nodess);
}
