#include "monty.h"
/**
 * add_op - The opcode add adds the top two elements of the stack.
 * @stack: stack represent in a doubly-linked list
 * @number_line: line in the file
*/

void add_op(stack_t **stack, unsigned int number_line)
{
	stack_t *element_a, *element_b;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't add, stack too short\n", number_line);
		release(NULL, NULL, 'r');
		free_dlistint(*stack);
		free(global.line);
		exit(EXIT_FAILURE);
	}
	element_a = *stack;
	element_b = (*stack)->next;
	element_b->n += element_a->n;
	*stack = element_a;
	element_b->prev = NULL;
	free(element_a);
}
