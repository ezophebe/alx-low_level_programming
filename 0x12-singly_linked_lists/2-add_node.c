#include "lists.h"
int len(const char *str);

/**
 * add_node- functn adds a new node at the beginning of list
 *@head: pointer to head of node
 *@str: string to br printd
 *Return: new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_elem;

	if (head == NULL)
	return (NULL);

	new_elem = malloc(sizeof(list_t));
	if (new_elem == NULL)
	return (NULL);

	if (*head == NULL)

		new_elem->next = NULL;

	else
			new_elem->next = *head;
		new_elem->str = strdup(str);
		new_elem->len = len(str);
		*head = new_elem;
	return (*head);
}
/**
 *len - function counts lenght of string
 *@str: string tobe counted
 *Return: len of string
 */

int len(const char *str)
{
	int i;

	if (str == NULL)
		return (0);
	i = 0;

	while (str[i] != '\0')
		i++;

	return (i);
}
