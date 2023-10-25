#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: head of the linked lists
 * @n: integer
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *love_list;

	if (head != NULL)
	{
		love_list = malloc(sizeof(listint_t));
		if (love_list == NULL)
			return (NULL);

		love_list->n = n;
		love_list->next = *head;
		*head = love_list;

		return (love_list);
	}
	return (NULL);
}
