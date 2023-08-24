#include "monty.h"

/**
 * func_print_char - prints the character in
 * the top node of linked list
 * @nu: pointer to the top element in a stack
 * @l: line number
 * Return: nothing
 */

void func_print_char(stc_t **nu, unsigned int l)
{
	stc_t *top = momo->top;

	(void) nu;
	if (top->n >= 0 && top->n <= 127)
		printf("%c\n", top->n);
	else
	{
		dprintf(2, "L%d: can't pchar, value out of range\n", l);
		free_all_mem();
		exit(EXIT_FAILURE);
	}

	if (top == NULL)
	{
		dprintf(2, "L%d: can't pchar, stack empty\n", l);
		free_all_mem();
		exit(EXIT_FAILURE);
	}

}
