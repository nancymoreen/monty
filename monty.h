#ifndef MONTY_H
#define MONTY_H

#include <stdlib.h>
#include <stdio.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

void div_op(stack_t **stack, unsigned int value);
void pop(stack_t **stack, unsigned int value);
void swap_op(stack_t **stack, unsigned int line_number);
void nop_op(stack_t **pointer __attribute__((unused)));
void sub_op(stack_t **pointer);
void pint_op(stack_t **stack, unsigned int number_line);
void push_op(stack_t **stack, __attribute__((unused))unsigned int line_number);
void pall_op(stack_t **stack,  __attribute__((unused))unsigned int line);
void mul_op(stack_t **stack, unsigned int number_line);
void mod_op(stack_t **stack, unsigned int number_line);
void add_op(stack_t **stack, unsigned int number_line);

#endif
