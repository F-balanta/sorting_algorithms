#include "sort.h"
/**
 * selection_sort - This function sorts an array of integers
 * in ascending order with using selection sort.
 * @array: array of integers.
 * @size: the size of the array
 * Prototype: void selection_sort(int *array, size_t size);
 * You’re expected to print the array after each time you swap two elements
 * Write in the file 2-O, the big O notations of the time complexity
 * of the Selection sort algorithm, with 1 notation per line:
 * in the best case
 * in the average case
 * in the worst case
 */
void selection_sort(int *array, size_t size)
{
	size_t count, i, min = 0;
	int aux;

	if (array == NULL)
		return;

	if (size > 0)
	{
		for (count = 0; count < size - 1; count++)
		{
			min = count;
			for (i = count + 1; i < size; i++)
			{
				if (array[i] < array[min])
					min = i;
			}
			if (min != count)
			{
				aux = array[count];
				array[count] = array[min];
				array[min] = aux;
				print_array(array, size);
			}
		}
	}
}
