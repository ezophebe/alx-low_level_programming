#include "lists.h"

/**
 *reverse_listint - function reverses a linked list
 *@head: pointer to the pointer (adress) of head
 *Return: pointer to the first node of reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *tempo;
	listint_t *new_tempo;

	if (head == NULL || *head == NULL)
		return (NULL);
	tempo = *head;
	*head = tempo->next;
	tempo->next = NULL;

	while (*head != NULL)
	{
		new_tempo = (*head)->next;
		(*head)->next = tempo;
		tempo = *head;

		if (new_tempo == NULL)
			return (*head);
		*head = new_tempo;
	}
	if (*head == NULL)
	{
		*head = tempo;
		return (*head);
	}
	return (NULL);
}
