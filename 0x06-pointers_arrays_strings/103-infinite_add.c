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
    int i, lastOfLonger, lastOfShorter, temp;
    char *longer, *shorter;

    lastOfLonger = strlen(n1) - 1;
    lastOfShorter = strlen(n2) - 1;
    if (lastOfLonger >= lastOfShorter)
    {
        longer = n1;
        shorter = n2;
    }
    else
    {
        longer = n2;
        shorter = n1;
        temp = lastOfLonger;
        lastOfLonger = lastOfShorter;
        lastOfShorter = temp;
    }
    temp = 0;
    for (i = 0; i <= lastOfLonger+1; i++)
    {
        /*out of size*/
        if((size_r - i - 2) < 0)
            return(0);
        if (i > lastOfShorter && (lastOfLonger - i >= 0))
            temp = temp + (longer[lastOfLonger - i] - '0');
        else
          if(i <= lastOfLonger)
            temp = temp + (longer[lastOfLonger - i] - '0') + (shorter[lastOfShorter - i] - '0');
        if(i > lastOfLonger && temp == 0)
          break;
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
