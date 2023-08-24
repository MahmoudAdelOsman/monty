#include "monty.h"

/**
 * func_print_str - prints the string contained in a linked list
 * @nu: pointer to the top element in a stack
 * @l: line number
 * Return: nothing
 */

void func_print_str(stc_t **nu, unsigned int l)
{
	stc_t *top = momo->top;
	(void)nu;
	(void)l;

	while (top && top->n != 0 && (top->n > 0 && top->n <= 127))
	{
		printf("%c", top->n);
		top = top->next;
	}
	printf("\n");
}
