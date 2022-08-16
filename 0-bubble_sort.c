#include "sort.h"

/**
* bubble_sort - bubble sort method
* @array: rray
* @size: size of array
* Return: Void
*/

void bubble_sort(int *array, size_t size)
{
	size_t r;
	size_t i;
	int tmp;
	r = 0;
	i = 0;

	if (size < 2)
		return;
	while (1)
	{
		
		while (i < size)
		{
			if (i == size - 1)
				break;
			if (array[i] > array[i + 1])
			{
				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;
				print_array(array, size);
			}
			else
				r++;
			i++;
		}
	if (r == size - 1)
		break;
	}
}
