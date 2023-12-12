#include "lists.h"

/**
 *sum_listint - function returns the sum of all the data(n) of a list
 *@head: pointer to head
 *Return: the sum
 */

int sum_listint(listint_t *head)
{
	int add = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		add += head->n;
		head = head->next;
	}
	return (add);
}
