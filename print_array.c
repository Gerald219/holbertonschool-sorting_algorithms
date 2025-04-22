#include <stdio.h>
#include "sort.h"

/**
 * print_array - Prints an array of integers
 * @array: The array to print
 * @size: Number of elements in the array
 */
void print_array(const int *array, size_t size)
{
	size_t i = 0;

	while (array && i < size)
	{
		if (i > 0)
			printf(", ");
		printf("%d", array[i]);
		i++;
	}
	printf("\n");
}
