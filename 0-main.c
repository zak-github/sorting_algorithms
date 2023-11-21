/* main.c */

#include <stdio.h>
#include "sort.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
    size_t n = sizeof(array) / sizeof(array[0]);

    printf("Original array:\n");
    print_array(array, n);

    printf("\nSorting array using Bubble Sort:\n");
    bubble_sort(array, n);

    printf("\nSorted array:\n");
    print_array(array, n);

    return (0);
}
