/*
 * 0x08. C - Recursion
 * task 5
 */
#include "main.h"

/**
 * sqrtHelper - x pow y
 * @v: int
 * @n: int power
 * Return: sqrt int
 */
int sqrtHelper(int v, int n)
{
	/*bad algorithm*/
	if (v * v == n)
		return (v);
	if (v >= n)
		return (-1);
	return (sqrtHelper(v + 1, n));
}
/**
 * _sqrt_recursion - x pow y
 * @n: int
 * Return: sqr using sqrtHelper
 */
int _sqrt_recursion(int n)
{
	return (sqrtHelper(1, n));
}
