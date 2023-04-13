/*
 * 0x0C. C - More malloc, free
 * task 1
 */
#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concatenates two strings.
 * @s1: lef size array refrance
 * @s2: right size array refrance
 * @n: size of right side
 * Return: array refrance concatenates two strings.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, j;
	char *concat;
	/*if NULL is passed, treat it as an empty string*/
	if (s1 == NULL && s2 == NULL)
	{
		concat =  malloc(1);
		if (concat == NULL)
			return (NULL);
		concat[0] = '\0';
		return (concat);
	}
	if (s2 != NULL)
	{
		if (strlen(s2) < n)
			n = strlen(s2);
	}
	/*allocated space in memory*/
	if (s1 == NULL)
		concat =  malloc((n * sizeof(char)) + 1);
	else if (s2 == NULL)
		concat =  malloc(strlen(s1) * sizeof(char) + 1);
	else
		concat =  malloc((strlen(s1) + n) * sizeof(char) + 1);

	if (concat == NULL)
		return (NULL);
	i = 0;
	/*fill left side*/
	if (s1 != NULL)
		for (i = 0; s1[i] != '\0'; i++)
			concat[i] = s1[i];
	/*fill right side*/
	if (s2 != NULL)
		for (j = 0; j < (int)n ; j++, i++)
			concat[i] = s2[j];
	/*end of string*/
	concat[i] = '\0';
	return (concat);
}
