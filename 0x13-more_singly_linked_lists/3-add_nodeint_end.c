#include "lists.h"

/**
 *add_nodeint_end - function adds node to the end of a list
 *@head: pointer to the pointer of head
 *@n: new integer (data, element) to be added to list
 *Return: pointer to new data
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *neww_node;
	listint_t *tempo;

	(void) tempo;

	neww_node = malloc(sizeof(listint_t));
	if (neww_node == NULL)
		return (NULL);
	neww_node->n = n;
	neww_node->next = NULL;
	tempo = *head;
	if (*head == NULL)
	{
		*head = neww_node;
	}
	else
	{
		while (tempo->next != NULL)
		{
			tempo = tempo->next;
		}
		tempo->next = neww_node;
	}
	return (*head);
}
