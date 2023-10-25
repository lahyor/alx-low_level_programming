#include <stdlib.h>
#include "lists.h"

/**
  * sum_listint - counts the sum of all data of a listint_t linked list
  * @head: head of the linked list
  * Return: Nothing
  */
int sum_listint(listint_t *head)
{
	int cost = 0;

	if (head)
	{
		while (head)
		{
			cost += head->n;
			head = head->next;
		}
	}

	return (cost);
}
