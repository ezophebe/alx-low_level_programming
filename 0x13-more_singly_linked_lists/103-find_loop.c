#include "lists.h"

/**
 *find_listint_loop - function finds loop in a linked list
 *@head: pointer to head of node
 *Return: pointer to node where loops starts or NULL if loops dont exit
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *pt2;
	listint_t *bf; /** before, previous */

	pt2 = head;
	bf = head;
	while (head && pt2 && pt2->next)
	{
		head = head->next;
		pt2 = pt2->next->next;

		if (head == pt2)
		{
			head = bf;
			bf = pt2;
			while (1)
			{
				pt2 = bf;
				while (pt2->next != head && pt2->next != bf)
				{
					pt2 = pt2->next;
				}
				if (pt2->next == head)
					break;
				head = head->next;
			}
			return (pt2->next);
		}
	}
	return (NULL);
}
