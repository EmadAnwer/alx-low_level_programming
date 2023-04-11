/*
 * 0x0B. C - malloc, free
 * task 2
 */
#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - concatenates two strings.
 * @s1: array refrance - left
 * @s2: array refrance - right
 * Return: array refrance full string
 */
char *str_concat(char *s1, char *s2)
{
	int len, i, j;
	char *arr;

	if ((s1 == NULL) && (s2 == NULL))
	{
		len = 1;
	}
	else if (s1 == NULL)
		len = strlen(s2) + 1;
	else if (s2 == NULL)
		len = strlen(s1) + 1;
	else
		len = ((strlen(s1) + 1) + (strlen(s1) + 1));
	arr = malloc(len);
	if (arr == NULL)
		return (NULL);

	if ((s1 == NULL) && (s2 == NULL))
		arr[0] = '\0';
	else if (s1 == NULL)
		for (i = 0; i < len; i++)
			arr[i] = s2[i];
	else if (s2 == NULL)
		for (i = 0; i < len; i++)
			arr[i] = s1[i];
	else
	{
		for (i = 0; s1[i] != '\0'; i++)
			arr[i] = s1[i];
		for (j = 0; s2[j] != '\0'; j++, i++)
			arr[i] = s2[j];
	}

	return (arr);
}
