#include "monty.h"

/**
 *_push - pushes an element to the stack.
 *@stack: doble pointer to an array
 *@line_number: line read
 *Return: nothing
 */

void _push(stack_t **stack, unsigned int line_number)
{
	(void) (*stack);
	(void) line_number;
	printf("this the _push function\n");
}

/**
 *_pall - prints all values on the stack, starting from the top of the stack.
 *@stack: doble pointer to an array
 *@line_number: line read
 *Return: nothing
 */

void _pall(stack_t **stack, unsigned int line_number)
{
	(void) line_number;

	if (!*stack)
		return;
	while (*stack)
	{
		printf("%d\n", (*stack)->n);
		*stack = (*stack)->next;
	}
	printf("this the _pall function\n");
}

/**
 *_pint - prints the value at the top of the stack, followed by a new line.
 *@stack: doble pointer to an array
 *@line_number: line read
 *Return: nothing
 */

void _pint(stack_t **stack, unsigned int line_number)
{
	if (!*stack)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
	printf("this the _pint function\n");
}

/**
 *_pop - removes the top element of the stack.
 *@stack: doble pointer to an array
 *@line_number: line read
 *Return: nothing
 */

void _pop(stack_t **stack, unsigned int line_number)
{
	stack_t *aux;

	if (!stack || !*stack)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}
	aux = *stack;
	*stack = (*stack)->next;
	(*stack)->prev = NULL;
	free(aux);

	printf("this the _pop function\n");
}

/**
 *_swap - swaps the top two elements of the stack.
 *@stack: doble pointer to an array
 *@line_number: line read
 *Return: nothing
 */

void _swap(stack_t **stack, unsigned int line_number)
{
	int x = 0;
	int y = 0;

	if (!*stack || !(*stack)->next)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	x = (*stack)->n;
	y = (*stack)->next->n;
	(*stack)->n = y;
	(*stack)->next->n = x;
	printf("this the _swap function\n");
}
