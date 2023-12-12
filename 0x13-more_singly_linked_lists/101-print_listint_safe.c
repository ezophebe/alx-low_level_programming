#include "lists.h"

/**
 *free_listp - free a linked list
 *@head: pointer to pointer of the head
 *Return: void
 */

void free_listp(listp_t **head)
{
	listp_t *tempo;
	listp_t *c;   /**current*/

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
 *print_listint_safe - function prints a list
 *@head: pointer to head
 *Return: num of nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nodes = 0;
	listp_t *p_head, *add, *neww;

	p_head = NULL;
	while (head != NULL)
	{
		neww = malloc(sizeof(listp_t));

		if (neww == NULL)
			exit(98);

		neww->p = (void *)head;
		neww->next = p_head;
		p_head = neww;
		add = p_head;
		while (add->next != NULL)
		{
			add = add->next;
			if (head == add->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&p_head);
				return (nodes);
			}
		}
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		nodes++;
	}
	free_listp(&p_head);
	return (nodes);
}
