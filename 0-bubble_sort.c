#include "sort.h"

/**
 * bubble_sort - sort array using bubble sort algorithm
 * @array: array of unorder integers to be sorted
 * @size: size of the array
 * Return: nothing
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j, k, check_sort, temp;

	if (size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		check_sort = 0;
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				for (k = 0; k < size; k++)
					print_array(array, size);
				check_sort = 1;
			}
		}
		if (check_sort == 0)
			return;
	}
}
