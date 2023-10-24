#include "lists.h"

/**
 *pop_listint - function deletes the head node and returns the head node's
 *data
 *@head: pointer to the pointer to head
 *Return: the deleted head's data
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *tempo;

	if (head == NULL || *head == NULL)
		return (0);

	n = (*head)->n;
	tempo = *head;
	*head = (*head)->next;
	free(tempo);
	return (n);
}
