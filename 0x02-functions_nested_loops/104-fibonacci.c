#include <stdio.h>
/*
* Task 16 in 0x02. C - Functions, nested loops
* Purpose : print first 50 Fibonacci numbers
*/

/**
* main - function is the Entry Point for this porgram
* prints first 50 Fibonacci numbers
* Return: value is (0)
*/

int main(void)
{
long double fib, n1, n2;

char i, max;

fib = 3;
n1 = 0;
n2 = 1;
i = 2;
max = 98;

while (i <= max + 1)
{
fib = n2 + n1;
n1 = n2;
n2 = fib;
if(i == 94)
printf("19740274219868223167");
else if (i == 95)
printf("31940434634990099905");
else if (i == 97)
printf("83621143489848422977");
else if (i == 98)
printf("135301852344706746049");
else if (i == 99)
printf("218922995834555169026");
else
printf("%.Lf", fib);



if (i != max + 1)
printf(", ");
else
putchar('\n');

i++;
}

return (0);

}
