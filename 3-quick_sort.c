#include "sort.h"

void quick_sort_recursive(int *array, int low, int high, size_t size);
int lomuto(int *array, int low, int high, size_t size);

/**
 * quick_sort - sorts array using Quick sort (Lomuto scheme)
 * @array: array of integers
 * @size: number of elements in array
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	quick_sort_recursive(array, 0, size - 1, size);
}

/**
 * quick_sort_recursive - recursively sorts a portion of the array
 * @array: array to sort
 * @low: start index
 * @high: end index
 * @size: total size of the array
 */
void quick_sort_recursive(int *array, int low, int high, size_t size)
{
	int pivot;

	if (low < high)
	{
		pivot = lomuto(array, low, high, size);
		quick_sort_recursive(array, low, pivot - 1, size);
		quick_sort_recursive(array, pivot + 1, high, size);
	}
}

/**
 * lomuto - partitions the array using Lomuto scheme
 * @array: array to partition
 * @low: start index
 * @high: end index
 * @size: total size of array
 * Return: new pivot index
 */
int lomuto(int *array, int low, int high, size_t size)
{
	int pivot = array[high], i = low, j, temp;

	for (j = low; j < high; j++)
	{
		if (array[j] < pivot)
		{
			if (i != j)
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
				print_array(array, size);
			}
			i++;
		}
	}
	if (i != high && array[i] != array[high])
	{
		temp = array[i];
		array[i] = array[high];
		array[high] = temp;
		print_array(array, size);
	}
	return (i);
}
