#include "sort.h"

/**
* selection_sort - selection sort method
* @array: sorted array
* @size: size of array
* Return: Void
 */

void selection_sort(int *array, size_t size)
{
	size_t i; 
	size_t j;
	size_t num;
	int is_swap; 
	int dir;
	is_swap = 0;
	num = i;

	is_swap = 0;
	for (i = 0; i < size - 1; i++)
	{
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[num])
			{
				num = j;
				is_swap = 1;
			}
		}
		if (is_swap)
		{
			dir = array[i];
			array[i] = array[num];
			array[num] = dir;
			print_array(array, size);
		}
	}
}
