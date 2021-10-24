#include "sort.h"
/**
 * bubble_sort - This functions sort an arrays of integers
 * in ascending order
 * @array: Is a set of numbers of the same data type
 * @size: Number of numbers belonging to the array
 * Return: This function is void - No return
 * Prototype: void bubble_sort(int *array, size_t size);
 * You’re expected to print the array after each time you swap two elements (See example below)
 * Write in the file 0-O, the big O notations of the time complexity of the Bubble sort algorithm, with 1 notation per line:
 * in the best case
 * in the average case
 *in the worst case
*/
 void bubble_sort(int *array, size_t size)
{
    int aux;
    size_t c, i;

    for (c = 0; c <= size; c++)
    {
        for (i = 0; i < size; i++)
        {
            if (array[i] > array[i + 1])
            {
                aux = array[i + 1];
                array[i + 1] = array[i];
                array[i] = aux;
                print_array(array, size);
            }
        }
    }
}
