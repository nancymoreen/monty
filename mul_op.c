#include "monty.h"

/**
 * mul_op - The opcode mul multiplies the second top element of the stack
 * with the top element of the stack.
 * @stack: Stack of elements
 * @number_line: line count
*/

void mul_op(stack_t **stack, unsigned int number_line)
{
	stack_t *element_one, *element_two;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't mul, stack too short\n", number_line);
		release(NULL, NULL, 'r');
		free_dlistint(*stack);
		free(global.line);
		exit(EXIT_FAILURE);
	}
	element_one = *stack;
	element_two = (*stack)->next;
	element_two->n *= element_one->n;
	*stack = element_two;
	element_two->prev = NULL;
	free(element_one);
}
