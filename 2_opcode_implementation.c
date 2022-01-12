#include "monty.h"

/**
 *_add - adds the top two elements of the stack..
 *@stack: doble pointer to an array
 *@line_number: line read
 *Return: nothing
 */

void _add(stack_t **stack, unsigned int line_number)
{
	(void) (*stack);
	(void) line_number;
	printf("this the _add function");
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
	printf("this the _nop function");
}
