#include "monty.h"

data_s *momo = NULL;

/**
 * main - main program
 * @argc: number of arguments
 * @argv: arrays of arguments
 * Return: 0 on Success
 */

int main(int argc, char **argv)
{
	size_t z = 0;

	check_argv(argc);
	define_momo();
	reading_f(argv[1]);

	while (getline(&momo->a, &z, momo->rf) != -1)
	{
		momo->nu += 1;
		str_to_words();
		s_sett_for_instruc();
		func_run();
		free_all_toke();
	}
	close_f();
	free_data_stc();
	return (0);
}
