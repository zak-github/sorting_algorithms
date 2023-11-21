/* 3-quick_sort.c */

#include "sort.h"

/**
 * quick_sort - Sorts an array of integers in ascending order using Quick sort
 * @array: The array to be sorted
 * @size: Size of the array
 */

int partition(int *array, int low, int high, size_t size);
void quick_sort(int *array, size_t size)
{
    if (array == NULL || size < 2)
        return;

    quicksort_recursive(array, 0, size - 1, size);
}

/**
 * quicksort_recursive - Recursive function for Quick sort
 * @array: The array to be sorted
 * @low: Starting index of the partition to be sorted
 * @high: Ending index of the partition to be sorted
 * @size: Size of the array
 */
void quicksort_recursive(int *array, int low, int high, size_t size)
{
    int pivot;

    if (low < high)
    {
        pivot = partition(array, low, high, size);

        /* Recursively sort elements before and after the pivot */
        quicksort_recursive(array, low, pivot - 1, size);
        quicksort_recursive(array, pivot + 1, high, size);
    }
}

/**
 * partition - Lomuto partition scheme for Quick sort
 * @array: The array to be sorted
 * @low: Starting index of the partition to be sorted
 * @high: Ending index of the partition to be sorted
 * @size: Size of the array
 *
 * Return: Index of the pivot element
 */
int partition(int *array, int low, int high, size_t size)
{
    int pivot, temp, i, j;

    pivot = array[high];
    i = low - 1;

    for (j = low; j <= high - 1; j++)
    {
        if (array[j] <= pivot)
        {
            /* Swap array[i] and array[j] */
            temp = array[i + 1];
            array[i + 1] = array[j];
            array[j] = temp;

            /* Print the array after each swap */
            print_array(array, size);

            i++;
        }
    }

    /* Swap array[i + 1] and array[high] (pivot) */
    temp = array[i + 1];
    array[i + 1] = array[high];
    array[high] = temp;

    /* Print the array after each swap */
    print_array(array, size);

    return (i + 1);
}

