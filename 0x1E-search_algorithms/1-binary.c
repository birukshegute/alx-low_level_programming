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
	int i, j;
	int n = (int)size;

	while (i <= n)
	{
		printf("Searching in array: [%d]\n", array[i]);
		j = i + (n - i) / 2;
		if (value == array[j])
			return (j);

		if (array[j] < value)
			i = j + 1;
		else
			n = j - 1;
	}
	return (-1);
}
