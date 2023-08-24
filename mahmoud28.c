#include "monty.h"

/**
 * print_stream_message - prints a message for getting stream error
 * @rf: path file
 * Return: nothing
 */

void print_stream_message(char *rf)
{
	dprintf(2, "Error: Can't open file %s\n", rf);
	free_data_stc();
	exit(EXIT_FAILURE);
}

/**
 * reading_f - reads a file
 * @rf: path file
 * Return: nothing
 */

void reading_f(char *rf)
{
	int v;

	v = open(rf, O_RDONLY);
	if (v == -1)
		print_stream_message(rf);

	momo->rf = fdopen(v, "r");
	if (momo->rf == NULL)
	{
		close(v);
		 print_stream_message(rf);
	}
}
