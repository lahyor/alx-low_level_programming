#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: head of the list
 * @n: value of the element
 * Return: the address of the new element
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *h;
	dlistint_t *nap;

	nap = malloc(sizeof(dlistint_t));
	if (nap == NULL)
		return (NULL);

	nap->n = n;
	nap->next = NULL;

	h = *head;

	if (h != NULL)
	{
		while (h->next != NULL)
			h = h->next;
		h->next = nap;
	}
	else
	{
		*head = nap;
	}

	nap->prev = h;

	return (nap);
}
