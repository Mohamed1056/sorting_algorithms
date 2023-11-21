#include "sort.h"

/**
 * swap - function to swap two values
 * @x: takes the first num
 * @y: takes the second num
 * Return: Nothing
*/
void swap(int *x, int *y)
{
	int temp;

	temp = *x;
	*x = *y;
	*y = temp;
}

/**
 * selection_sort - function to sort the number
 * by selection algorithm
 * @array: takes the array
 * @size: takes the size of the array
 * Return: Nothing
*/
void selection_sort(int *array, size_t size)
{
	int i, j, min_index;
	/*after decleration of varaiables*/
	if (!array || !size)
		return;
	for (i = 0; i < size - 1; i++)
	{
		min_index = i;
		/*checking the smallest number between the group*/
		for (j = i + 1; j < size; j++)
		{
			if (array[j] > array[min_index])
				min_index = j;
			swap(&array[j], &array[min_index]);
			print_array(array, size);
		}
	}
}
