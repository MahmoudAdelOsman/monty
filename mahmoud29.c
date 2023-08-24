#include "monty.h"

/**
 * print_error_message - prints error message for invalid instructions
 * Return: nothing
 */

void print_error_message(void)
{
	dprintf(2, "L%d: unknown instruction %s\n", momo->nu, momo->tok[0]);
	free_all_mem();
	exit(EXIT_FAILURE);
}

/**
 * s_sett_for_instruc - sets the settings for instruction
 * Return: nothing
 */

void s_sett_for_instruc(void)
{
	int z = 0;
	instr_t a[] = {
		{"push", &func_push},
		{"pop", &delete_top},
		{"pint", &func_pint},
		{"swap", &swap_func},
		{"nop", &nop_func},
		{"add", &monty_add},
		{"sub", &func_for_sub},
		{"mul", &func_for_mult},
		{"div", &func_for_divid},
		{"mod", &func_for_modules},
		{"pall", &func_pall},
		{"pchar", &func_print_char},
		{"pstr", &func_print_str},
		{"rotl", &func_rotate_l},
		{"rotr", &func_rotate_r},
		{"stack", &func_to_stack},
		{"queue", &func_to_queue},
		{NULL, NULL}
	};
	if (momo->n == 0)
		return;
	if (momo->tok[0][0] == '#')
	{
		momo->usex->opcode = "nop";
		momo->usex->func = nop_func;
		return;
	}
	for (; a[z].opcode != NULL; z++)
	{
		if (strcmp(a[z].opcode, momo->tok[0]) == 0)
		{
			momo->usex->opcode = a[z].opcode;
			momo->usex->func = a[z].func;
			return;
		}
	}
	print_error_message();
}
