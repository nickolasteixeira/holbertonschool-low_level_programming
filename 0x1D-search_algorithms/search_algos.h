#ifndef _Search_Algos_
#define _Search_Algos_

#include <stdlib.h>
/* mandatory functions */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
listint_t *jump_list(listint_t *list, size_t size, int value);

/* Helper functions */
int find_value(int *array, unsigned int i, unsigned int e, int v, size_t s);
int binary_S(int *array, size_t l, size_t r, int value);
void print_array(int *array, size_t l, size_t r);

/**
 * struct listint_s - singly linked list
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct listint_s
{
    int n;
    size_t index;
    struct listint_s *next;
} listint_t;

#endif /* _Search Algos */
