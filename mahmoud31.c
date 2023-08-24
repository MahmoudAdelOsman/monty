#include "monty.h"

/**
 * delete_ele_top - deletes element from top
 * Return: nothing
 */

void delete_ele_top(void)
{
	stc_t *nu;

	nu = momo->top;
	momo->top = nu->next;
	free(nu);
}
