#include "monty.h"

/**
 * print_error_for_malloc - prints a message for malloc error
 * Return: nothing
 */

void print_error_for_malloc(void)
{
	dprintf(2, "Error: malloc failed\n");
	free_data_stc();
	exit(EXIT_FAILURE);
}
