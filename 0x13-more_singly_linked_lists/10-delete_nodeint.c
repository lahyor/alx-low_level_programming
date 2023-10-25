#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * delete_nodeint_at_index - deletes the node at index of a `linked list.
  * @head: head of the linked list
  * @index: index of the node that should be deleted.
  * Return: 1 if it succeeded, -1 if it failed
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int love = 1;
	listint_t *new = *head, *camp;

	if (!head || !*head)
		return (-1);

	if (index == 0)
	{
		*head = new->next;
		free(new);
		return (1);
	}

	camp = *head;
	while (camp)
	{
		if (love == index)
		{
			new = camp->next;
			camp->next = new->next;
			free(new);
			return (1);
		}

		camp = camp->next;
		love++;
	}

	return (-1);
}
