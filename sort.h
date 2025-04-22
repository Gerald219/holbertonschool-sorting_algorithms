#ifndef SORT_H
#define SORT_H

#include <stddef.h>

/**
 * struct listint_s - doubly linked list node
 * @n: interger stored in the node
 * @prev: pointer to the previous element
 * @next: pointer to the next element
 *
 * description: doubly linked list node structure
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void print_array(const int *aray, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);

#endif
