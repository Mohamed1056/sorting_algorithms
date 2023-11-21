#include "sort.h"

/**
 * swap - functon to swap two elements
 * @a: takes the first eleent
 * @b: takes the second element
 * Return: Nothing
*/

void swap(listint_t *a, listint_t *b)
{
	if (a->prev)
		a->prev->next = b;
	if (b->next)
		b->next->prev = a;
	a->next = b->next;
	b->prev = a->prev;
	a->prev = b;
	b->next = a;
}

/**
 * insertion_sort_list - function to sort elements
 * using the insertion sort algoorithm
 *
 * @list: takes the root of the list
 * Return: Nothing
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *i, *j;
	/*after decleration of the two pointers*/
	if (!list || !*list || !(*list)->next)
		return;
	i = (*list)->next;
	while (i)
	{
		j = i;
		i = i->next;
		while (j && j->prev)
		{
			if (j->prev->n > j->n)
			{
				swap(j->prev, j);
				if (!j->prev)
					*list = j;
				print_list((const listint_t *)*list);
			}
			else
				j = j->prev;
		}
	}
}
