/*
 * 0x06. C - More pointers, arrays and strings
 * task 11
 */
#include "main.h"
#include <string.h>
/**
 * infinite_add - capitalizes all words of a string
 * @n1: string refrance for n1
 * @n2: string refrance for n2
 * @r: string refrance for resulte
 * @size_r: size
 * Return: *src "all words of a string capital"
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, longer, shorter, temp;
	char *sLonger, *sShorter;

	longer = strlen(n1) - 1;
	shorter = strlen(n2) - 1;
	if (longer >= shorter)
	{
		sLonger = n1;
		sShorter = n2;
	}
	else
	{
		sLonger = n2;
		sShorter = n1;
		temp = longer;
		longer = shorter;
		shorter = temp;
	}
	temp = 0;
	for (i = 0; i <= longer + 1 && !(i > longer && temp == 0); i++)
	{
		if ((size_r - i - 2) < 0)
			return (0);
		if (i > shorter && (longer - i >= 0))
			temp = temp + (sLonger[longer - i] - '0');
		else if (i <= longer)
			temp = temp + (sLonger[longer - i] - '0') + (sShorter[shorter - i] - '0');
		if (temp > 9)
		{
			r[size_r - i - 2]  = '0' + temp % 10;
			temp = 1;
		}
		else
		{
			r[size_r - i - 2] = '0' + temp;
			temp = 0;
		}
	}
	r[size_r - 1] = '\0';
	return (&r[size_r - i - 1]);
}
