#include "search_algos.h"
#include <math.h>

/**
 * linear_skip - Linear search in a skip list using express like jumping
 * @list: pointer to the head of the list
 * @value: int value we are looking for
 * Return: Null or value index pointer
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *l, *r;

	if (list == NULL)
		return (NULL);

	l = list;
	r = l;
	while (1)
	{

		if (r->express)
			r = r->express;
		printf("Value checked at index [%ld] = [%d]\n", r->index, r->n);
		if (r->n >= value)
			break;
		else if (r->express == NULL)
		{
			l = r;
			while (r->next)
			{
				r = r->next;
			}
			break;
		}

		else if (r->n < value)
			l = r;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", l->index, r->index);
	while (1)
	{
		printf("Value checked at index [%ld] = [%d]\n", l->index, l->n);
		if (l->n == value)
			return (l);
		if (r == l)
			break;
		if (l->next)
			l = l->next;
	}
	return (NULL);
}
