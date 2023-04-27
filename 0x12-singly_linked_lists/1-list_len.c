/*
 * 0x12. C - Singly linked lists
 * task 1
 * my solution depends on looping and change h "head" reference with the next h
 * and check if it equals null so it is the end
 */
#include "lists.h"
/**
 * list_len - print list of strings
 * @h: refrance of list_t "linked list of strings"
 * Return: list size
 */
size_t list_len(const list_t *h)
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
