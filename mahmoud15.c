#include "monty.h"

/**
 * func_pall - does the pall function
 * @nu: pointer to the top element of a stack
 * @l: line number
 * Return: nothing
 */

void func_pall(stc_t **nu, unsigned int l)
{
	stc_t *n;

	if (momo->top == NULL)
		return;
	(void) l;
	(void) nu;

	n = momo->top;
	while (n != NULL)
	{
		printf("%d\n", n->n);
		n = n->next;
	}
}
