#include <stdlib.h>
#include "lists.h"

/**
  * pop_listint - function that deletes the head node ofa linked list
  * @head: head of the linked list
  * Return: Nothing
  */
int pop_listint(listint_t **head)
{
	listint_t *new_len;
	int n = 0;

	if (*head != NULL)
	{
		new_len = (*head)->next;
		n = (*head)->n;
		free(*head);
		*head = new_len;
	}

	return (n);
}
