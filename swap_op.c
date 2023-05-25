#include "monty.h"

/**
 * swap_op - The opcode swap swaps the top two elements of the stack.
 * @stack: The stack of elements
 * @line_number: the number of the line
 */

void swap_op(stack_t **stack, unsigned int line_number)
{
	stack_t *top_a, *top_b;

	if (stack[0] == '\0' || stack[0]->next == '\0')
	{
		fprintf(stderr, "L%i: can't swap, stack too short\n", last_line);
		exit(EXIT_FAILURE);
	}
	top_a = stack[0];
	top_b = stack[0]->next;
	if (top_a->next->next != '\0')
	{
		top_a->next = top_b->next;
		top_b->next->prev = top_a;
	}
	else
		top_a->next = '\0';
	top_a->prev = top_b;

	top_b->next = top_a;
	top_b->prev = '\0';
	*stack = top_b;
}
