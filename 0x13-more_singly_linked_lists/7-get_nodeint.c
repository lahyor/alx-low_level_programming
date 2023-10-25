#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

/**
  * get_nodeint_at_index - counts the nth node of a linked list
  * @head: head of the linked lisst
  * @index: index of the node
  * Return: the nth node of a listint_t linked list.
  */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int love = 0;

	if (head)
	{
		while (head)
		{
			if (love == index)
				return (head);

			head = head->next;
			love++;
		}
	}

	return (NULL);
}
