#include "lists.h"

/**
 * add_node- functn adds a new node at the beginning of list
 *@head: pointer to head of node
 *@str: string to br printd
 *Return: new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newelem;
	unsigned int i, count;

	count = 0;

	newelem = malloc(sizeof(list_t));
	if (newelem == NULL)
	{
		return NULL;
	}
	newelem->str = strdup(str);
	if (newelem->str == NULL)
	{
		free(newelem);
		return NULL;
	}
	for (i = 0; str[i] != '\0'; i++)
		count++;
	newelem->len = count;
	newelem->next = *head;
	*head = newelem;
	return (*head);
}
