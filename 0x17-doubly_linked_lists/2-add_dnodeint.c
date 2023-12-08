#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: head of the list
 * @n: value of the element
 * Return: the address of the new element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *nap;
	dlistint_t *h;

	nap = malloc(sizeof(dlistint_t));
	if (nap == NULL)
		return (NULL);

	nap->n = n;
	nap->prev = NULL;
	h = *head;

	if (h != NULL)
	{
		while (h->prev != NULL)
			h = h->prev;
	}

	nap->next = h;

	if (h != NULL)
		h->prev = nap;

	*head = nap;

	return (nap);
}
