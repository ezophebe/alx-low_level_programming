#include "lists.h"

/**
 *create_new_node - function to create new node
 *@n: data of the node
 *Return: pointer (adress) to new node
 */

listint_t *create_new_node(int n)
{
	listint_t *neww_node;

	neww_node = malloc(sizeof(listint_t));

	if (neww_node == NULL)
		return (NULL);
	neww_node->n = n;
	neww_node->next = NULL;
	return (neww_node);
}

/**
 *insert_nodeint_at_index - function inserts a new node at nth position
 *@head: pointer to the pointer of head
 *@idx: index to the new node
 *@n: the integer (data, element) of the new node
 *Return: the address of the newly created node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *tempo;
	listint_t *tempo_old;
	listint_t *neww_node;

	tempo = *head;
	if (head == NULL)
		return (NULL);
	neww_node = create_new_node(n);
	if (neww_node == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = neww_node;
		return (neww_node);
	}
	if (idx == 0)
		*head = neww_node;
	for (i = 0; i < idx - 1 && tempo != NULL && idx != 0; i++)
		tempo = tempo->next;
	if (tempo == NULL)
		return (NULL);
	if (idx == 0)
		neww_node->next = tempo;
	else
	{
		tempo_old = tempo->next;
		tempo->next = neww_node;
		neww_node->next = tempo_old;
	}
	return (neww_node);
}
