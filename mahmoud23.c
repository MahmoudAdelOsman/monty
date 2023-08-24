#include "monty.h"

/**
 * func_rotate_r - rotates the bottom value of a stack to top
 * @nu: pointer to the top element in a stack
 * @l: line number
 * Return: nothing
 */

void func_rotate_r(stc_t **nu, unsigned int l)
{
	stc_t *top = momo->top;
	stc_t *bottom = momo->top;
	(void)l;

	if (momo->top == NULL || momo->top->next == NULL)
		return;

	while (bottom->next != NULL)
		bottom = bottom->next;

	bottom->prev->next = NULL;
	momo->top = bottom;
	bottom->prev = *nu;
	bottom->next = top;
	top->prev = bottom;
}
