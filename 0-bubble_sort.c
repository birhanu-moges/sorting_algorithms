#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order using a bubble
 * sort algorithm
 * @array: array of integers to be sorted
 * @size: amount of elements in array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, len;
	int temp, checker = 1;

	if (!array || size < 2)
		return;

	len = size;
	while (checker)
	{
		checker = 0;
		for (i = 1; i < len; i++)
		{
			if (array[i - 1] > array[i])
			{
				temp = array[i - 1];
				array[i - 1] = array[i];
				array[i] = temp;
				checker++;
				print_array(array, size);
			}
		}
		len--;
	}
}

