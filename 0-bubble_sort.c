#include "sort.h"
/**
 * bubble_sort - sort array
 * @array: arry to be sorted
 * @size: size of array
 */
void bubble_sort(int *array, size_t size)
{
    size_t i, j;

    if (!array || !size)
        return;
    for (i = 0; i < size - 1; ++i)
    {
        for (j = 0; j < size - 1 - i; ++j)
        {
            if (array[j] > array[j + 1])
            {
                swapint(&array[j], &array[j + 1]);
                print_array(array, size);
            }
        }
    }
}
