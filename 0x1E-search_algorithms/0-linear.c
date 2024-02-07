#include <stdio.h>
#include "search_algos.h"
/**
 * linear_search - linearly searches at what index value is in the array
 * @array: array to be searched
 * @size: size of array
 * @value: value to be searched
 *
 * Return: index of value or -1
 */
int linear_search(int *array, size_t size, int value)
{
	int i;
	int n = (int)size;

	for (i = 0; i < n; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (value == array[i])
		{
			return (i);
		}
	}
	return (-1);
}
