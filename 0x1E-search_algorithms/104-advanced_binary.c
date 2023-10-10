#include "search_algos.h"

/**
 * binary_search_recursive - searches for a value in a sorted array of integers
 * @array: array of ints
 * @left: left index
 * @right: right index
 * @value: int value we are looking for
 * Return: Always EXIT_SUCCESS
 */
int binary_search_recursive(int *array, int left, int right, int value)
{
	int i;

	if (left <= right)
	{
		int mid = left + (right - left) / 2;

		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			if (i == left)
				printf("%d", array[i]);
			else
				printf(", %d", array[i]);
		}
		printf("\n");

		if (array[mid] == value)
		{
			if (mid == left || array[mid - 1] != value)
				return (mid);
			return (binary_search_recursive(array, left, mid - 1, value));
		}
		else if (array[mid] < value)
			return (binary_search_recursive(array, mid + 1, right, value));
		else
			return (binary_search_recursive(array, left, mid - 1, value));
	}
	return (-1);
}

/**
 * advanced_binary - searches for a value in a sorted array of integers
 * @array: array of ints
 * @size: size of array
 * @value: int value we are looking for
 * Return: Always EXIT_SUCCESS
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (binary_search_recursive(array, 0, size - 1, value));
}
