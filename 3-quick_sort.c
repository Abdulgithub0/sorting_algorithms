#include <stdio.h>
#include "sort.h"

void quick_sort_helper(int *array, int lo, int hi, size_t size);
int lomuto_partition(int *array, int lo, int hi, size_t size);
void swap(int *a, int *b);


/**
 * quick_sort - sorts an array of integers in ascending order using Quick Sort
 * algorithm with Lomuto partition scheme
 * @array: pointer to the array to sort
 * @size: size of the array
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	quick_sort_helper(array, 0, size - 1, size);
}

/**
 * quick_sort_helper - sorts an array of integers in
 * ascending order using Quick
 * Sort algorithm with Lomuto partition scheme
 * @array: pointer to the array to sort
 * @lo: lowest index of the partition to sort
 * @hi: highest index of the partition to sort
 * @size: size of the array
 */
void quick_sort_helper(int *array, int lo, int hi, size_t size)
{
	int p;

	if (lo < hi)
	{
		p = lomuto_partition(array, lo, hi, size);
		quick_sort_helper(array, lo, p - 1, size);
		quick_sort_helper(array, p + 1, hi, size);
	}
}

/**
 * lomuto_partition - partitions an array of integers in ascending order using
 * Lomuto partition scheme
 * @array: pointer to the array to partition
 * @lo: lowest index of the partition to sort
 * @hi: highest index of the partition to sort
 * @size: size of the array
 * Return: index of the pivot
 */
int lomuto_partition(int *array, int lo, int hi, size_t size)
{
	int pivot, i, j;

	pivot = array[hi];
	i = lo - 1;
	for (j = lo; j <= hi - 1; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			if (i != j)
			{
				swap(&array[i], &array[j]);
				print_array(array, size);
			}
		}
	}
	if (array[i + 1] != array[hi])
	{
		swap(&array[i + 1], &array[hi]);
		print_array(array, size);
	}
	return (i + 1);
}

/**
 * swap - swaps two integers
 * @a: pointer to the first integer
 * @b: pointer to the second integer
 */
void swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

