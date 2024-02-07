#include <stdio.h>
#include "search_algos.h"
/**
 * interpolation_search - looks for @value in array using interpolation search.
 * @array: array to be searched in.
 * @size: size of array.
 * @value: value to be looked for.
 *
 * Return: index of value or -1.
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0;

	size_t high = size  - 1;

	if (array == NULL)
		return (-1);
	while (low <= high)
	{
		size_t pos = low + (((double)(high - low) /
					(array[high] - array[low])) * (value - array[low]));

		if (pos > size)
		{
			printf("Value checked array[%lu] is out of range\n", size);
		}
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
		{
			return (pos);
		}
		else
		{
			if (array[pos] < value)
				low = pos + 1;
			else
				high = pos - 1;
		}
	}
	return (-1);
}
