#include "search_algos.h"
#include <math.h>

/**
 * jump_list - searches for a value in an array of
 * integers using the Jump search algorithm
 * @list: input list
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t ind, l, m;
	listint_t *prev;

	if (list == NULL || size == 0)
		return (NULL);

	m = (size_t)sqrt((double)size);
	ind = 0;
	l = 0;

	do {
		prev = list;
		l++;
		ind = l * m;

		while (list->next && list->ind < ind)
			list = list->next;

		if (list->next == NULL && ind != list->ind)
			ind = list->ind;

		printf("Value checked at index [%d] = [%d]\n", (int)ind, list->n);

	} while (ind < size && list->next && list->n < value);

	printf("Value found between indexes ");
	printf("[%d] and [%d]\n", (int)prev->ind, (int)list->ind);

	for (; prev && prev->ind <= list->ind; prev = prev->next)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)prev->ind, prev->n);
		if (prev->n == value)
			return (prev);
	}

	return (NULL);
}
