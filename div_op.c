#include "monty.h"

/**
 * div_op - The opcode div divides the second top element of the stack by the
 * top element of the stack
 * @stack: stack represent in a doubly-linked list
 * @number_line: line of the flie
 * Return: nothing
*/
void div_op(stack_t **stack, unsigned int number_line)
{
	stack_t *element_one, *element_two;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't div, stack too short\n", value);
		release(NULL, NULL, 'r');
		free_dlistint(*stack);
		free(global.line);
		exit(EXIT_FAILURE);
	}
	element_one = *stack;
	element two = (*stack)->next;

	if (element_one->n == 0)
	{
		fprintf(stderr, "L%u: division by zero\n", value);
		release(NULL, NULL, 'r');
		free_dlistint(*stack);
		free(global.line);
		exit(EXIT_FAILURE);
	}
	element_one->n /= element_two->n;
	*stack = element_two;
	element_two->prev = NULL;
	free(element_one);
}
