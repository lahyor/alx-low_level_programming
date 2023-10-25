#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * insert_nodeint_at_index - inserts a new node at a given position.
  * @head: head of the linked list
  * @idx: index of the list where the new node should be added
  * @n: integer
  * Return: the address of the new node, or NULL if it failed
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_code, *len;
	unsigned int love = 1;

	if (head)
	{
		new_code = malloc(sizeof(listint_t));
		if (new_code == NULL)
			return (NULL);

		new_code->n = n;
		if (idx > 0)
		{
			len = *head;
			while (len)
			{
				if (love == idx)
				{
					new_code->next = len->next;
					len->next = new_code;
					return (new_code);
				}
				len = len->next;
				love++;
			}
			if (idx > love)
				return (NULL);
		}
		else
		{
			new_code->next = *head;
			*head = new_code;
		}
		return (new_code);
	}
	return (NULL);
}
