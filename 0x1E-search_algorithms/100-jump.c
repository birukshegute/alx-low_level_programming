#include <stdio.h>
#include <math.h>
#include "search_algos.h"
/**
 * jump_search - searches for @value in array, by traversing lineary
 * while jumping by an interval of square root of size
 * @array: array to be searched in
 * @value: value to be looked for
 * @size: size of array
 *
 * Return: index of value or -1
 */
int jump_search(int *array, size_t size, int value)
{
	int i, j, m, k, n;

	i = 0;

	n = (int)size;

	m = 0;

	k = sqrt(n);

	while (array[m] <= n && m < n)
	{
		printf("Value checked array[%d] = [%d]\n", m, array[m]);
		i = m;
		m += k;
		if (m > n - 1)
			return (-1);
		if (value > i && value <= m)
		{
			printf("Value found between indexes [%d] and [%d]\n", i, m);
			for (j = i; j <= m; j++)
			{
				printf("Value checked array[%d] = [%d]\n", j, array[j]);
				if (array[j] == value)
					return (j);
			}
		}
	}
	return (-1);
}
