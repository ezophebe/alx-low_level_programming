#include "lists.h"

/**
 *free_list - frees a linked list
 *@head: list_t list to be freed
 *Return: none
 */

void free_list(list_t *head)
{
	list_t *tempry;

	while (head)
	{
		tempry = head->next;
		free(head->str);
		free(head);
		head = tempry;
	}
}
