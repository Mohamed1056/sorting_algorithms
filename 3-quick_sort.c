#include "sort.h"

/**
 * swap - swap 2 values in the array
 * @array: takes the array
 * @size: takes the size of the array
 * @a: takes the 1st value
 * @b: takes the 2nd value
 * Return: Nothing
*/
void swap(int *array, size_t size, int *a, int *b)
{
	if (*a != *b)
	{
		*a = *a + *b;
		*b = *a - *b;
		*a = *a - *b;
		print_array((const int *)array, size);
	}
}
/**
 * find_partition - function to find the partition
 * @arr: takes the array
 * @size: takes the size of the array
 * @low: takes the low index
 * @high: takes the high index
 * Return: i
 */
size_t find_partition(int *arr, size_t size, ssize_t low, ssize_t high)
{
	int i, j, pivot = arr[high];
	/*after decleration*/
	for (i = j = low; j < high; j++)
		if (arr[j] < pivot)
			swap(arr, size, &arr[j], &arr[i++]);
	swap(arr, size, &arr[i], &arr[high]);
	return (i);
}

/**
 * quicksort - function that do quick sort
 * @arr: takes the array
 * @size: tajes array's size
 * @low: takes he low index
 * @high: takes the high index
 * Return: Nothing
*/
void quicksort(int *arr, size_t size, ssize_t low, ssize_t high)
{
	if (low < high)
	{
		size_t po = find_partition(arr, size, low, high);
		/*after decleration*/
		quicksort(arr, size, low, po - 1);
		quicksort(arr, size, po + 1, high);
	}
}
/**
 * quick_sort - function to sort by quick sort
 * algorithm
 * @array: takes the array
 * @size: takes the array's size
 * Return: Nothing
*/
void quick_sort(int *array, size_t size)
{
	if (!array || !size)
		return;
	quicksort(array, size, 0, size - 1);
}
