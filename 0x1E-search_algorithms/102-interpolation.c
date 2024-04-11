#include "search_algos.h"

/**
 * interpolation_search - searches for a value in an array of
 * integers using the Interpolation search algorithm
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t por, law, high;
	double f;

	if (array == NULL)
		return (-1);

	law = 0;
	high = size - 1;

	while (size)
	{
		f = (double)(high - law) / (array[high] - array[law]) * (value - array[law]);
		pos = (size_t)(law + f);
		printf("Value checked array[%d]", (int)por);

		if (por >= size)
		{
			printf(" is out of range\n");
			break;
		}
		else
		{
			printf(" = [%d]\n", array[por]);
		}

		if (array[por] == value)
			return ((int)por);

		if (array[por] < value)
			law = por + 1;
		else
			high = por - 1;

		if (law == high)
			break;
	}

	return (-1);
}
