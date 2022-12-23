#include "sort.h"
/**
 * selection_sort - array of integers in ascending order
 *@array: array
 *@size: size of array
 *Retrun : array by selection_sort algorithm
 */
void selection_sort(int *array, size_t size)
{
    size_t i, j, min;
    if (!array || !size)
    {
        return;
    }
    for (i = 0; i < size; i++)
    {
        min = i;
        for (j = i + 1; j < size; j++)
        {
            if (array[j] < array[min])
            {
                min = j;
            }
            if (min != i)
            {
                swap(&array[j], &array[j + 1]);
                print_array(array, size);
            }
        }
    }
}