#include "sort.h"

/**
 * swap_values - swap array elements
 * @array: array
 * @i: ith  index of the array
 * @j: jth index of the array
 */
void swap_values(int *array, size_t i, size_t j)
{
	int tmp;

	if (i == j)
		return;
	tmp = array[i];
	array[i] = array[j];
	array[j] = tmp;
}

/**
 * lomuto_partition - partions an arry using lomuto partition scheme
 * @array: array
 * @low: first index of the array
 * @high: last index of the array
 * @size: array size
 *
 * Return: index position for current element
 */

size_t lomuto_partition(int *array, size_t low, size_t high, size_t size)
{
	int pivot;
	size_t i, current;

	pivot = array[low];
	current = low;
	for (i = low; i <= high; i++)
	{
		if (array[i] < pivot)
		{
			current++;
			swap_values(array, current, i);
			print_array(array, size);
		}
	}
	if (array[current] != pivot)
	{
		swap_values(array, low, current);
		print_array(array, size);
	}
	return (current);
}

/**
 * quicksort - sorts an array of integers in ascending order using
 * the Quick sort algorithm
 * @array: array
 * @low: first element
 * @high: last element
 * @size: size of the array
 */

void quicksort(int *array, size_t low, size_t high, size_t size)
{
	size_t index = 0;

	if (low < high)
	{
		index = lomuto_partition(array, low, high, size);
		if (low != index)
			quicksort(array, low, index - 1, size);
		if (high !=  index)
			quicksort(array, index + 1, high, size);
	}
}


/**
 * quick_sort - sorts an array of integers in ascending order using
 * the Quick sort algorithm
 * @array: array
 * @size: size of the array
 */

void quick_sort(int *array, size_t size)
{
	quicksort(array, 0, size, size);
}
