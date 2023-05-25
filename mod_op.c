#include "monty.h"

/**
 * mod_op - The opcode mod computes the rest of the division of the second top
 * element of the stack by the top element of the stack.
 * @stack: Stack of elements
 * @number_line: Number reference of the line in the file
*/

void mod_op(stack_t **stack, unsigned int number_line)
{
	stack_t *element_a, *element_b;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't mod, stack too short\n", number_line);
		release(NULL, NULL, 'r');
		free_dlistint(*stack);
		free(global.line);
		exit(EXIT_FAILURE);
	}
	element_a = *stack;
	element_b = (*stack)->next;
	if (element_a->n == 0)
	{
		fprintf(stderr, "L%u: division by zero\n", number_line);
		release(NULL, NULL, 'r');
		free_dlistint(*stack);
		free(global.line);
		exit(EXIT_FAILURE);
	}
	element_b->n %= element_a->n;
	*stack = element_b;
	element_b->prev = NULL;
	free(element_a);
}
