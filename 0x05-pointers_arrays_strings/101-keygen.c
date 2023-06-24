#include <stdio.h>

int checksum(char *data)
{
	int sum = 0;
	int i = 0;

	while (data[i] != '\0')
	{
		sum += (int)data[i];
		i++;
	}

	return sum;
}

int main()
{

	printf("zzzzzzzzzzzzzzzzzzzzzzX");

	return 0;
}
