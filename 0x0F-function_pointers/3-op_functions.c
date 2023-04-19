/*
 * 0x0F. C - Function pointers
 * task 3
 */
#include "3-calc.h"

/**
 * op_add - add
 * @a: int number
 * @b: int number
 * Return: a + b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - sub
 * @a: int number
 * @b: int number
 * Return: a - b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - mul
 * @a: int number
 * @b: int number
 * Return: a * b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - div
 * @a: int number
 * @b: int number
 * Return: a / b
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - mod
 * @a: int number
 * @b: int number
 * Return: a % b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
