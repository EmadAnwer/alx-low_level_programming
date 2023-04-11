/*
 * 0x0B. C - malloc, free
 * task 0
 */
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - creates an array of chars
 * @str: array size
 * Return: array refrance or NULL
 */
char *_strdup(char *str)
{
	int len;
	char *arr;

	if (str == NULL)
		return (NULL);
	len = strlen(str);
	arr = malloc((sizeof(char) * len) + 1);
	if (arr == NULL)
		return (NULL);
	while (len--)
		arr[len] = str[len];
	return (arr);
}
