#include "lists.h"

/**
 *add_nodeint - function adds node at th beginnn of a list
 *@head: pointer to the pointer of head
 *@n: new integer(element or data) to be added to the list
 *Return: pointer to the new int
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *neww_node;

	if (head == NULL)
		return (NULL);
	neww_node = malloc(sizeof(listint_t));
	if (neww_node == NULL)
		return (NULL);
	if (*head == NULL)
	{
		neww_node->next = NULL;
	}
	else
	{
		neww_node->next = *head;
	}
	neww_node->n = n;
	*head = neww_node;
	return (*head);
}
