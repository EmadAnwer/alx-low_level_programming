/*
 * 0x0B. C - malloc, free
 * task 4
 */
#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * wordsCounter - words Counte
 * @str: array refrance
 * Return: word count
 */
int wordsCounter(char *str)
{
	int wordsCount, i;

	wordsCount = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		if ((i == 0) && (str[i] != ' '))
		{
			wordsCount++;
		}
		else if (str[i] != ' ')
		{
			if (str[i - 1] == ' ')
			{
				wordsCount++;
			}
		}
	}
	return (wordsCount);
}

/**
 * findWord - findWord
 * @str: array refrance
 * Return: array refrance
 */
char *findWord(char *str)
{
	int i;

		for (i = 0; str[i] != '\0'; i++)
		{
			if (i == 0 && str[i] != ' ')
			{
				return (&str[i]);
			}
			else if (str[i] != ' ')
			{
				if (str[i - 1] == ' ')
				{
					return (&str[i]);
				}
			}
		}
		return (NULL);
}

/**
 * strtow - concatenates argument vector
 * @str: array refrance
 * Return: array refrance full string
 */
char **strtow(char *str)
{
	int i, len, wordsCount, l, j;
	char **words, *word;

	len = strlen(str);
	if (len == 0 || str == NULL)
		return (NULL);
	wordsCount = 0;
	wordsCount = wordsCounter(str);
	if (wordsCount == 0)
		return (NULL);
	words = malloc(wordsCount * sizeof(char *) + 1);
	if (words == NULL)
		return (NULL);
	word = str;
	for (i = 0; i < wordsCount; i++)
	{
		word = findWord(word);
		l = 0;
		while (word[l] != '\0' && word[l] != ' ')
			l++;
		words[i] = malloc(sizeof(char) * l + 2);
		if (words == NULL)
		{
			/*free*/
			return (NULL);
		}

		for (j = 0; j < l; j++)
		{
			words[i][j] = *word;
			word++;
		}
		words[i][j] = '\0';
		word++;
	}
	return (words);
}
