#include "lists.h"

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

        new_elem->str = strdup(str);
        if (new_elem->str == NULL)
        {
        free(new_elem);
        return (NULL);
        }

        new_elem->len = strlen(str);
        new_elem->next = *head;
        *head = new_elem;

        return (new_elem);
}
