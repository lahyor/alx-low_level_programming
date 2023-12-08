#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a dlistint_t linked list
 * @head: head of the list
 * @index: index of the new node
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *hl;
	dlistint_t *hz;
	unsigned int x;

	hl = *head;

	if (hl != NULL)
		while (hl->prev != NULL)
			hl = hl->prev;

	x = 0;

	while (hl != NULL)
	{
		if (x == index)
		{
			if (x == 0)
			{
				*head = hl->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				hz->next = hl->next;

				if (hl->next != NULL)
					hl->next->prev = hz;
			}

			free(hl);
			return (1);
		}
		hz = hl;
		hl = hl->next;
		x++;
	}

	return (-1);
}
