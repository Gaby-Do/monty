#include "monty.h"

/**
 *_add - adds the top two elements of the stack..
 *@stack: doble pointer to an array
 *@line_number: line read
 *Return: nothing
 */

void _add(stack_t **stack, unsigned int line_number)
{
	int num1 = 0;
	int num2 = 0;
	int sum = 0;

	printf("this the _add function\n");
	if (!*stack || !(*stack)->next)
		{
			fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
			exit(EXIT_FAILURE);
		}
	num1 = (*stack)->n;
	num2 = (*stack)->next->n;
	sum = num1 + num2;
	_pop(stack, line_number);
	(*stack)->n = sum; /**ver si era este o si era solo -> n*/
}

/**
 *_nop - The opcode nop doesn’t do anything.
 *@stack: doble pointer to an array
 *@line_number: line read
 *Return: nothing
 */

void _nop(stack_t **stack, unsigned int line_number)
{
	(void) (*stack);
	(void) line_number;
}

/**
 *_sub - sub the top element of the stack from the second top element.
 *@stack: doble pointer to an array
 *@line_number: line read
 *Return: nothing
 */

void _sub(stack_t **stack, unsigned int line_number)
{
	int num1 = 0;
	int num2 = 0;
	int sub = 0;

	printf("this the _sub function\n");
	if (!*stack || !(*stack)->next)
		{
			fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
			exit(EXIT_FAILURE);
		}
	num1 = (*stack)->n;
	num2 = (*stack)->next->n;
	sub = num1 - num2;
	if (sub < 0)
		sub = sub * -1;
	_pop(stack, line_number);
	(*stack)->n = sub; /**ver si era este o si era solo -> n*/
}