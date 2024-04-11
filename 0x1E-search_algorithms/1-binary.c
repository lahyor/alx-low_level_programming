#include "search_algos.h"

/**
  * binary_search - Searches for a value in a sorted array
  * of integers using binary search.
  * @array: A pointer to the first element of the array to search.
  * @size: The number of elements in the array.
  * @value: The value to search for.
  * Return: If the value is not present or the array is NULL, -1.
  * Otherwise, the index where the value is located.
  * Description: Prints the [sub]array being searched after each change.
  */
int binary_search(int *array, size_t size, int value)
{
	size_t i, lea, rig;

	if (array == NULL)
		return (-1);

	for (lea = 0, rig = size - 1; rig >= lea;)
	{
		printf("Searching in array: ");
		for (i = lea; i < rig; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = lea + (rig - lea) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			rig = i - 1;
		else
			lea = i + 1;
	}

	return (-1);
}
