#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*Function to shuffle an array*/
void shuffleArray(char *array[], int size)
{
	int i;
	srand(time(NULL));
	if (size > 1)
	{
		for (i = size - 1; i > 0; --i)
		{
			int j = rand() % (i + 1);
			char *temp = array[i];
			array[i] = array[j];
			array[j] = temp;
		}
	}
}

int main()
{
	int numStrings;
	// Array of strings
	const char *strings[] = {
		"zzzzzzzzzzzzzzzzzzzzzzX",
		"zzzzzzzzzzzzzzzzzzzzzXz",
		"zzzzzzzzzzzzzzzzzzzzXzz",
		"zzzzzzzzzzzzzzzzzzzXzzz",
		"zzzzzzzzzzzzzzzzzzXzzzz",
		"zzzzzzzzzzzzzzzzzXzzzzz",
		"zzzzzzzzzzzzzzzzXzzzzzz",
		"zzzzzzzzzzzzzzzXzzzzzzz",
		"zzzzzzzzzzzzzzXzzzzzzzz",
		"zzzzzzzzzzzzzXzzzzzzzzz",
		"zzzzzzzzzzzzXzzzzzzzzzz",
		"zzzzzzzzzzzXzzzzzzzzzzz",
		"zzzzzzzzzzXzzzzzzzzzzzz",
		"zzzzzzzzzXzzzzzzzzzzzzz",
		"zzzzzzzzXzzzzzzzzzzzzzz",
		"zzzzzzzXzzzzzzzzzzzzzzz",
		"zzzzzzXzzzzzzzzzzzzzzzz",
		"zzzzzXzzzzzzzzzzzzzzzzz",
		"zzzzXzzzzzzzzzzzzzzzzzz",
		"zzzXzzzzzzzzzzzzzzzzzzz",
		"zzXzzzzzzzzzzzzzzzzzzzz",
		"zXzzzzzzzzzzzzzzzzzzzzz",
		"Xzzzzzzzzzzzzzzzzzzzzzz"};

	/*Get the length of the array*/
	numStrings = sizeof(strings) / sizeof(strings[0]);

	/*Shuffle the array*/
	shuffleArray((char **)strings, numStrings);

	/*Print the randomly selected string*/
	printf("%s", strings[0]);

	return 0;
}
