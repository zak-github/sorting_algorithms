#include "sort.h"

/**
 * swap_elements - Swaps two elements in an array.
 * @a: Pointer to the first element.
 * @b: Pointer to the second element.
 */
void swap_elements(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

/**
 * shell_sort - Sorts an array of integers in ascending order
 *              using the shell sort algorithm.
 * @array: Array of integers.
 * @size: Size of the array.
 *
 * Description: Uses the Knuth interval sequence.
 */
void shell_sort(int *array, size_t size)
{
    size_t gap, i, j;

    if (array == NULL || size < 2)
        return;

    /* Initialize the gap using the Knuth interval sequence */
    for (gap = 1; gap < size / 3;)
        gap = gap * 3 + 1;

    /* Iterate over gaps and perform insertion sort for each gap */
    for (; gap >= 1; gap /= 3)
    {
        for (i = gap; i < size; i++)
        {
            j = i;
            /* Perform insertion sort for the current gap */
            while (j >= gap && array[j - gap] > array[j])
            {
                swap_elements(array + j, array + (j - gap));
                j -= gap;
            }
        }
        /* Print the array after each pass with the current gap */
        print_array(array, size);
    }
}
