#include "monty.h"

/**
 * free_stc - frees all element in a stack
 * @nu: pointer to the first element in a stack
 * Return: nothing
 */

void free_stc(stc_t *nu)
{
	if (nu == NULL)
		return;

	if (nu->next != NULL)
	{
		free_stc(nu->next);
	}
	free(nu);
}
