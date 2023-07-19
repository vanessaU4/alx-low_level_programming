#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - adds 2 numbers
 * @a: first number to add
 * @b: second number to add
 * Return: sum of the numbers
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two numbers
 * @a: first number
 * @b: second number
 * Return: difference of the numbers
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two numbers
 * @a: first number
 * @b: second number
 * Return: The result to multiply a * b.
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two numbers
 * @a: first number
 * @b: second number
 * Return: division of a by b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - divides two numbers, returns the remainder
 * @a: A first number
 * @b: A second number
 * Return: A remainder of the division
 */

int op_mod(int a, int b)
{
	return (a % b);
}
