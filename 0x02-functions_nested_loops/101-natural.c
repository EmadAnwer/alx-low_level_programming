#include "main.h"
#include <stdio.h>
/*
* Task 12 in 0x02. C - Functions, nested loops
* Purpose : prints the sum of all the multiples of 3 or 5 below 1024
*/

/**
* natural - prints the sum of all the multiples of 3 or 5 below 1024 (excluded)
* Return: void
*
*/

void natural()
{
	int n = 1024,sum = 0;
    n--;
    while(n != 0)
    {
        if(n%3 == 0 || n%5 == 0)
            sum = sum + n;
        n--;
    }
    printf("%d\n",sum);
}
