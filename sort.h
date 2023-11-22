/* sort.h */

#ifndef SORT_H
#define SORT_H

#include <stddef.h>

/* Function prototypes task0 */
void print_array(const int *array, size_t size);
void bubble_sort(int *array, size_t size);

/* Definition of a doubly linked list node */
typedef struct listint_s
{
    int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;

/* Function prototypes task one*/
void print_list(const listint_t *list);
void insertion_sort_list(listint_t **list);

/* Function prototypes tasks two*/
void print_array(const int *array, size_t size);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);

/* Additional prototype for quicksort_recursive */
void quicksort_recursive(int *array, int low, int high, size_t size);

void shell_sort(int *array, size_t size);
#endif /* SORT_H */

