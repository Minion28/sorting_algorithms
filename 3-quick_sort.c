#include "sort.h"

/**
* quick_sort - quicksort method
* @array: array
* @size: size of array
* Return: Void
*/

void quick_sort(int *array, size_t size)
{
	quick_sort_main(array, 0, size - 1, size);
}

/**
* quick_sort_main - quick sort method
* @array: array
* @init: start of array
* @final: end of array
* @size: size of array
* Return: Void
*/

void quick_sort_main(int *array, int init, int final, size_t size)
{
	int start;
	int stop;
	int i;
	int f;
	int v;
	int u;

	start = init;
	i = start;
	stop = final;
	f = stop;
	v = array[(i + f) / 2];
	do {
		while (array[i] < v)
			i++;
		while (array[f] > v)
			f--;
		if (i <= f)
		{
			u = array[i];
			array[i++] = array[f];
			array[f--] = u;
			print_array(array, size);
		}
	} while (i < f);
	if (start < f)
		quick_sort_main(array, start, f, size);
	if (i < stop)
		quick_sort_main(array, i, stop, size);
}
