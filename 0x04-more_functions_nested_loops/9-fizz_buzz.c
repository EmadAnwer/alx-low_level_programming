#include <stdio.h>
/*
* Task 9 in 0x04. C - More functions, more nested loops
* Purpose : The “Fizz-Buzz test” is an interview question
*/

/**
 * main - prints the numbers from 1 to 100, followed by a new line.
 * Return: value is (0)
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
			printf("FizzBuzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0 && i != 100)
			printf("Buzz ");
		else if (i == 100)
			printf("Buzz");
		else
			printf("%d ", i);
	}
	printf("\n");
	return (0);

}
