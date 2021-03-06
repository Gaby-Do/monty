#include "monty.h"

/**
 *_mul - multiplies the second top elem of the stack with the top elem.
 *@stack: doble pointer to an array
 *@line_number: line read
 *Return: nothing
 */

void _mul(stack_t **stack, unsigned int line_number)
{
	int num1 = 0;
	int num2 = 0;
	int mul = 0;

	if (!*stack || !(*stack)->next)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	num1 = (*stack)->n;
	num2 = (*stack)->next->n;
	mul = num1 * num2;
	_pop(stack, line_number);
	(*stack)->n = mul;
}

/**
 *_mod - computes the rest of the div of the second top elem by the top elem.
 *@stack: doble pointer to an array
 *@line_number: line read
 *Return: nothing
 */

void _mod(stack_t **stack, unsigned int line_number)
{
	int num1 = 0;
	int num2 = 0;
	int mod = 0;

	if (!*stack || !(*stack)->next)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	num1 = (*stack)->n;
	if (num1 == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}
	num2 = (*stack)->next->n;
	mod = num2 % num1;
	_pop(stack, line_number);
	(*stack)->n = mod;
}

