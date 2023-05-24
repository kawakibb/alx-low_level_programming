#include "3-calc.h"

	int op_add(int a, int b);
	int op_sub(int a, int b);
	int op_mul(int a, int b);
	int op_div(int a, int b);
	int op_mod(int a, int b);


/**
* op_add - the sum.
* @a: 1st number.
* @b: 2nd number.
* Return: The sum.
*/
	int op_add(int a, int b)
	{
		return (a + b);
	}
/**
* op_sub - difference of 2 nbrs.
* @a: 1st number.
* @b: 2nd number.
* Return: The difference 2nbr
*/
	int op_sub(int a, int b)
	{
		return (a - b);
	}
/**
* op_mul - the product of 2 nbr
* @a: 1st number.
* @b: 2st number.
*
* Return: The product of 2nbr
*/
	int op_mul(int a, int b)
	{
		return (a * b);
	}
/**
* op_div - Returns the division 2nbr
* @a: 1st number.
* @b: 2nd number.
*
* Return: The quotient 2nbr
*/
	int op_div(int a, int b)
	{
		return (a / b);
	}
/**
* op_mod - Returns the remainder
* @a: 1st number.
* @b: 2nd number.
*
* Return: division
*/
	int op_mod(int a, int b)
	{
		return (a % b);
	}

