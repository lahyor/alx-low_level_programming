#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: head of the linked list
 * @n: integer
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *love_list, *camp;

	if (head)
	{
		love_list = malloc(sizeof(listint_t));
		if (love_list == NULL)
			return (NULL);

		love_list->n = n;
		love_list->next = NULL;

		if (*head == NULL)
		{
			*head = love_list;
			return (*head);
		}
		else
		{
			camp = *head;
			while (camp->next)
				camp = camp->next;

			camp->next = love_list;
			return (camp);
		}
	}

	return (NULL);
}
