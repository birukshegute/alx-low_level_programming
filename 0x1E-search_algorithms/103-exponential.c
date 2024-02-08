#include <stdio.h>
#include <math.h>
#include "search.h"

void print_array(int *array, int first, int last);

/**
 * exponential_search - searches for @value in arrayt using exponential search..
 * @array: array to be searched in.
 * @size: size of array.
 * @value: value to be looked for in array.
 *
 * Return: index of value or -1.
 */
int exponential_search(int *array, size_t size, int value)
{
	int i, m, n, low = 0,  mid, high;
       	
	n = (int)size;
	
	high = n - 1,
	
	i = 1;
	
	m = pow(2,i);

	if (array == NULL)
		return (-1);
	if (array[0] == value)
		return (0);
	while (array[m] <= value && m < n) 
	{
		i++;
		m = pow(2,i);

		printf("Value checked array[%d] = [%d]\n", m, array[m]);
		print_array(array, low, high);
		while (low <= high) 
		{
			mid = (low + high) / 2;

			if (array[mid] == value)
			{
				printf("Value found between indexes [%d] and [%d]\n", low, high);
				return (mid);
			}
			else if (array[mid] < value)
				low = mid + 1;
			else
				high = mid - 1;
		}
	}
	return (-1);
}
/**
 * print_array - lists the array in full.
 * @array: array to be listed.
 * @first: first member of the array.
 * @last: last member of the array.
 *
 * Return: 0
 */
void print_array(int *array, int first, int last)
{
	int i;

	printf("Searching in array: ");
	for (i = first; i <= last; i++)
	{
		if (i != first)
			printf(", ");
		printf("%d", array[i]);
	}
	printf("\n");
}
