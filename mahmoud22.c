#include "monty.h"

/**
 * func_rotate_l - rotates the top value of a stack to bottom
 * @nu: pointer to the top element in a stack
 * @l: line number
 * Return: nothing
 */

void func_rotate_l(stc_t **nu, unsigned int l)
{
	stc_t *top = momo->top;
	stc_t *bottom = momo->top;
	(void)l;

	if (momo->top == NULL || momo->top->next == NULL)
		return;

	while (bottom->next != NULL)
		bottom = bottom->next;

	top->next->prev = *nu;
	momo->top = top->next;
	bottom->next = top;
	top->next = NULL;
	top->prev = bottom;
}
