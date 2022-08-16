#ifndef _SORT_H_
#define _SORT_H_
#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - Doubly linked list node
 * @n: stored integer
 * @prev: Pointer to previous element of a list
 * @next: Pointer to next element of a list
 */

typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/*0-bubble_sort.c*/
void bubble_sort(int *array, size_t size);

/*1-insertion_sort_list.c*/
void insertion_sort_list(listint_t **list);

/*2-selection_sort.c*/
void selection_sort(int *array, size_t size);

/*3-quick_sort.c*/
void quick_sort(int *array, size_t size);
void quick_sort_main(int *array, int init, int final, size_t size);

/*100-shell_sort.c*/
void shell_sort_main(int *array, size_t size, size_t gap, size_t index);
void shell_sort(int *array, size_t size);

/*101-cocktail_sort_list.c*/
void cocktail_sort_list(listint_t **list);
void swap_node(listint_t **list, listint_t *node);
size_t len_list(const listint_t *h);

/*102-counting_sort.c*/
void counting_sort(int *array, size_t size);

/*print_list.c*/
void print_list(const listint_t *list);

/*print_array.c*/
void print_array(const int *array, size_t size);

#endif