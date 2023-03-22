#include <stdio.h>
/*
* Task 15 in 0x02. C - Functions, nested loops
* Purpose : prints the sum of the even-valued < 4,000,000
*/

/**
 * main - function is the Entry Point for this porgram
 * prints prints the sum of the even-valued < 4,000,000
 * Return: value is (0)
 */

int main(void)
{
	int n1, n2, fib, sum;

	char i;

	fib = 0;
	n1 = 0;
	n2 = 1;
	i = 2;
	sum = 0;

	while (fib < 4000000)
	{
		fib = n2 + n1;
		n1 = n2;
		n2 = fib;

		if (fib % 2 == 0)
			sum = sum + fib;
		i++;
	}
	printf("%d\n", sum);
	return (0);

}
