#include "lists.h"

/**
 *add_node_end - funtion adds a new node at the end of a list
 *@head: pointer to head of node
 *@str: string to the printed
 *Return: pointer to the new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newelem, *tempry;
	unsigned int i, count;

	count = 0;

	newelem = malloc(sizeof(list_t));
	if (newelem == NULL)
		return (NULL);
	newelem->str = strdup(str);
	for (i = 0; str[i] != '\0'; i++)
		count++;
	newelem->len = count;
	newelem->next = NULL;
	tempry = *head;

	if (tempry == NULL)
		*head = newelem;
	else
	{
		while (tempry->next != NULL)
		tempry = tempry->next;
		tempry->next = newelem;
	}
	return (*head);
}
