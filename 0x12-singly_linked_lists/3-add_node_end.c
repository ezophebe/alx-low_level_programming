#include "lists.h"
/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: A pointer to the head of the list.
 * @str: The string to be duplicated and added to the new node.
 * Return: The address of the new element, or NULL if it fails.
 */
list_t *add_node_end(list_t **head, const char *str)
{
    list_t *new_elem, *temp;
    
    new_elem = malloc(sizeof(list_t));
    if (new_elem == NULL)
        return (NULL);

    new_elem->str = strdup(str);
    if (new_elem->str == NULL) {
        free(new_elem);
        return (NULL);
    }

    new_elem->len = strlen(str);
    new_elem->next = NULL;

    if (*head == NULL) {
        *head = new_elem;
    } else {
        temp = *head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = new_elem;
    }

    return (new_elem);
}

