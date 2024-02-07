#include <stdio.h>
#include "search_algos.h"
/**
 * binary_search - searches value in the  array using binary search.
 * @array: array to be searched in.
 * @value: vlaue to be searched.
 * @size: size of array
 *
 * Return: index of value or -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i = 0, j = 0, k = size - 1;

	while (i <= k)
	{
		printf("Searching in array: ");
		for (j = i; j < k; j++)
			printf("%d, ", array[j]);
		printf("%d\n", array[j]);

		j = (i + k) / 2;
		if (value == array[j])
			return (j);
		if (array[j] < value)
			i = j + 1;
		else
			k = j - 1;
	}
	return (-1);
}
