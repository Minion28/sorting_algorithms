#include "sort.h"

/**
* cocktail_sort_list - cocktail sort method
* @list: pointer to list
* Return: Void
*/

void cocktail_sort_list(listint_t **list)
{
	int is_swapped;
	listint_t *cur;

	is_swapped = 1;
	if (!list || len_list(*list) < 2)
		return;

	cur = *list;
	while (is_swapped)
	{
		for (is_swapped = 0; cur->next;)
		{
			if (cur->next->n < cur->n)
			{
				swap_node(list, cur);
				print_list(*list);
				is_swapped++;
			}
			else
				cur = cur->next;
		}
		if (!is_swapped)
			break;
		for (is_swapped = 0; cur->prev;)
		{
			if (cur->prev->n > cur->n)
			{
				swap_node(list, cur->prev);
				print_list(*list);
				is_swapped++;
			}
			else
				cur = cur->prev;
		}
	}
}

/**
* swap_node - swap two nodes in list
* @list: pointer to list
* @node: swapped node
* Return: Void
*/

void swap_node(listint_t **list, listint_t *node)
{
	node->next->prev = node->prev;
	if (node->prev)
		node->prev->next = node->next;
	else
		*list = node->next;
	node->prev = node->next;
	node->next = node->next->next;
	node->prev->next = node;
	if (node->next)
		node->next->prev = node;
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
