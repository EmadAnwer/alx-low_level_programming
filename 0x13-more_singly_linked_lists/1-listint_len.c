/*
 * 0x13. C - More singly linked lists
 * task 1
 * my solution depends on looping and change h "head" reference with the next h
 * and check if it equals null so it is the end
 */
#include "lists.h"
/**
 * listint_len - print list of ints
 * @h: refrance of list_t "linked list of ints"
 * Return: list size
 */
size_t listint_len(const listint_t *h)
{
	int size;

	size = 0;
	if (h == NULL)
		return (0);

	while (h)
	{
		h = h->next;
		size++;
	}
	return (size);
}
