#include "lists.h"

/**
 *free_listint - function frees a list
 *@head: pointer to head
 *Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *tempo;

	while ((tempo = head) != NULL)
	{
		head = head->next;
		free(tempo);
	}
}
