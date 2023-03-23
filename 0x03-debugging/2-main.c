#include <stdio.h>
#include "main.h"

/**
* main - prints the largest of 3 integers
* Return: 0
*/

int main(void)
{
        int a, b, c;
        int largest;

        a = 972;
        b = -98;
        c = 0;

        largest = largest_number(a, b, c);

        printf("%d is the largest number\n", largest);
	a = 0;
        b = 972;
        c = -98;

        largest = largest_number(a, b, c);

        printf("%d is the largest number\n", largest);


	a = -98;
        b = 0;
        c = 972;

        largest = largest_number(a, b, c);

        printf("%d is the largest number\n", largest);
        return (0);
}
