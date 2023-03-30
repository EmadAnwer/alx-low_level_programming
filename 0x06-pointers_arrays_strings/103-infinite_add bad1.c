/*
 * 0x06. C - More pointers, arrays and strings
 * task 6
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
	int i, len1, len2, temp;

	len1 = strlen(n1) - 1;
	len2 = strlen(n2) - 1;
	temp = 0;
	for (i = 0; ((n1[i] != '\0') && (n2[i] != '\0')) && i < size_r; i++)
	{
		if((i >= len2) && (i < len1))
		{
			temp = temp + (n1[len1 - i] - '0');
			if(temp > 9)
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
		else if ((i >= len1) && (i < len2))
		{
			temp = temp + (n2[len2 - i] - '0');
			if(temp > 9)
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
		
		else
		{
			temp = temp + (n1[len1 - i] - '0') + (n2[len2 - i] - '0');
			if(temp > 9)
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
	}
	if(temp == 1)
	{
		r[size_r - i - 2] = '0' + temp;
		i++;
	}
	r[size_r - 1] = '\0';
	r = &r[size_r - i - 1];
	return (r);
}
