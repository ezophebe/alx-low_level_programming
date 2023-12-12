#include "lists.h"

/**
 *free_listint2 - function frees list and set head to null
 *@head: pointer to the pointer of head
 *Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *tempo;

	if (head == NULL || *head == NULL)
		return;
	while ((*head)->next != NULL)
	{
		tempo = (*head)->next;
		free(*head);
		*head = tempo;
	}
	free(*head);
	*head = NULL;
}
