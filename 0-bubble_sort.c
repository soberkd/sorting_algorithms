#include "sort.h"

/**
* bubble_sort - sorts an array of integers in ascending order using the
* Bubble sort algorithm
* @array: The array to be sorted
* @size: The size of the array
*
* Return: void
*/
void bubble_sort(int *array, size_t size)
{
	size_t i, n, new_n;
	int swap, counter = 1;
	
	for (n = 0; n < size && counter != 0; n++)
	{
		counter = 0;
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				counter++;
				swap = array[i];
				array[i] = array[i + 1];
				array[i + 1] = swap;
				print_array(array, size);
			}
		}
	}
}
