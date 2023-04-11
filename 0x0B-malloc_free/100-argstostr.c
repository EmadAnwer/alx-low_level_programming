/*
 * 0x0B. C - malloc, free
 * task 2
 */
#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * argstostr - concatenates argument vector
 * @ac: height
 * @av: 2D array refrance
 * Return: array refrance full string
 */
char *argstostr(int ac, char **av)
{
	int i, len, j;
	char *arr, *tar;

	if (ac == 0 || av == NULL)
		return (NULL);
	len = 0;
	for (i = 0; i < ac; i++)
	{
		len = len + strlen(av[i]) + 1;
	}

	arr = malloc(len + 1);
	if (arr == NULL)
		return (NULL);

	tar = arr;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; j <= (int)strlen(av[i]); j++)
		{
			if (av[i][j] == '\0')
				*arr = '\n';
			else
				*arr = av[i][j];
			arr++;
		}
	}
	*arr = '\0';
	return (tar);
}
