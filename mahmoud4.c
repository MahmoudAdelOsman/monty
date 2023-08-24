#include "monty.h"

/**
 * free_all_mem - frees the whole memory reserved for task
 * Return: nothing
 */

void free_all_mem(void)
{
	close_f();
	free_all_toke();
	free_data_stc();
}
