#include "lists.h"

/**
 *delete_nodeint_at_index - function deletes node at index of a list
 *@head: pointer to pointer (the adress) to head
 *@index: index of node to be deleted
 *Return: 1 on success, -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *tempo;
	listint_t *node;

	tempo = *head;

	if (head == NULL || *head == NULL)
		return (-1);
	for (i = 0; i < index - 1 && tempo != NULL && index != 0; i++)
		tempo = tempo->next;
	if (tempo == NULL)
		return (-1);
	if (index == 0)
	{
		node = tempo->next;
		free(tempo);
		*head = node;
	}
	else
	{
		if (tempo->next == NULL)
		{
			node = tempo->next;
		}
		else
		{
			node = tempo->next->next;
			free(tempo->next);
			tempo->next = node;
		}
	}
	return (-1);
}
