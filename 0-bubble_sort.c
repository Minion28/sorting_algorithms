#include "sort.h"

/**
* bubble_sort - bubble sort method
* @array: rray
* @size: size of array
* Return: Void
*/

void bubble_sort(int *array, size_t size)
{
	size_t num;
	int tmp;
	size_t i, j;
	num = size;

	for (i = 0; i < num; i++)
	{
		for (j = 0; j < (num - 1); j++)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				print_array(array, num);
			}
		}
	}
}
