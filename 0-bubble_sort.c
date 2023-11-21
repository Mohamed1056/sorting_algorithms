#include "sort.h"

/**
 * bubble_sort - function that sort an array of integers
 * using bubble sort algorithm
 *
 * @array: takes an array of ints
 * @size: takes the size of the array
 * Return: Nothing
*/

void bubble_sort(int *array, size_t size)
{
	int swp;
	size_t i, j;
	/*checking the existance of function parameters*/
	if (!array || !size)
		return;
	/*setting value for i*/
	i = 0;
	/*making the loop that will run the function*/
	while (i < size)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = swp;
				print_array(array, size);
			}
		}
		i++;
	}
}
