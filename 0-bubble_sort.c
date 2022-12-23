#include "sort.h"
/**
 * bubble_sort - sort array
 * @array: arry to be sorted
 * @size: size of array
 */
void bubble_sort(int *array, size_t size)
{
    size_t i, j;
    int action;
    if (!array || !size)
        return;
    for (i = 0; i < size - 1; ++i)
    {
        for (j = 0; j < size - 1 - i; ++j)
        {
            if (array[j] > array[j + 1])
            {
                action = array[j];
                array[j] = array[j + 1];
                array[j + 1] = action;
                print_array(array, size);
            }
        }
    }
}
