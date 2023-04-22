#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order using a bubble
 * sort algorithm
 * @array: array of integers to be sorted
 * @size: amount of elements in array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, n;
	int temp;
	bool swapped_elements = true;

	if (!array || size < 2)
		return;

	len = size;
	while (swapped_elements)
	{
		swapped_elements = false;
		for (i = 1; i < len; i++)
		{
			if (array[i - 1] > array[i])
			{
				temp = array[i - 1];
				array[i - 1] = array[i];
				array[i] = temp;
				swapped_elements = true;
				print_array(array, size);
			}
		}
		len--;
	}
}

