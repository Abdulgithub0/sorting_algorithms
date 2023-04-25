#include "sort.h"

/**
 * selection_sort - sort an array of integers using selection sort
 * @array: array to be sorted
 * @size: size of the array
 * Return: void
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, temp, k;

	bool flag;

	if (size < 2)
		return;
	for (i = 0; i < size - 1; i++)
	{
		k = i;
		flag = false;
		for (j = i + 1; j < size; j++)
		{
			if (array[k] > array[j])
			{
				k = j;
				flag = true;
			}
		}
		if (!flag)
			return;
		temp = array[k];
		array[k] = array[i];
		array[i] = temp;
		print_array(array, size);
	}
}
