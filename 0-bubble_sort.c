#include "sort.h"

/**
* bubble_sort - sorts using the Bubble sort algorithm
* @array: array to be sorted
* @size: size of the array
*/
void bubble_sort(int *array, size_t size)
{
	size_t i, n;
	int temp, swap;

	for (n = size, swap = 1; n > 0 && swap; n--)
	{
		swap = 0;
		for (i = 0; (i + 1) < n; i++)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i + 1];
				array[i + 1] = array[i];
				array[i] = temp;
				print_array(array, size);
				swap = 1;
			}
		}
	}
}
