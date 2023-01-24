#include "sort.h"

/**
* shell_sort - sorts an array of integers in ascending order
* using the Shell sort algorithm, using the Knuth sequence
* @array: array to be sorted
* @size: size of the array
*/
void shell_sort(int *array, size_t size)
{
	size_t n = 1;

	while (n < size)
		n = (n * 3) + 1;

	while ((n = (n - 1) / 3) > 0)
		_shellsort(array, size, n);
}
/**
*_shellsort - auxiliar function for shell_sort
* @arr: array
* @size: size of the array
* @n: intervals
*/
void _shellsort(int *arr, int size, int n)
{
	int temp, i, j;

	for (i = 0; (i + n) < size; i++)
	{
		for (j = i + n; (j - n) >= 0; j = j - n)
		{
			if (arr[j] < arr[j - n])
			{
				temp = arr[j];
				arr[j] = arr[j - n];
				arr[j - n] = temp;
			}
		}
	}
	print_array(arr, size);
}
