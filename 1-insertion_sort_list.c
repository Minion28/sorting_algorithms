#include "sort.h"

/**
* insertion_sort_list - insertion sort method
* @list: sorted list
* Return: Void
**/

void insertion_sort_list(listint_t **list)
{
	listint_t *x; 
	listint_t *t;
	listint_t *a;

	if (list == NULL || *list == NULL || len_list(*list) < 2)
		return;

	for (x = (*list)->next; x != NULL; x = t)
	{
		t = x->next;
		a = x->prev;
		while (a != NULL && x->n < a->n)
		{
			a->next = x->next;
			if (x->next != NULL)
				x->next->prev = a;
			x->prev = a->prev;
			x->next = a;
			if (a->prev != NULL)
				a->prev->next = x;
			else
				*list = x;
			a->prev = x;
			a = x->prev;
			print_list(*list);
		}
	}
}

/**
 * len_list - return number of elements in a linked dlistint_t list
 * @h: pointer to dlistint_t list
 * Return: number of nodes
 */
size_t len_list(const listint_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
