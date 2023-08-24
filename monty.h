#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stddef.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * struct stc_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */

typedef struct stc_s
{
	int n;
	struct stc_s *prev;
	struct stc_s *next;
} stc_t;

/**
 * struct instr_s - opcode and its function
 * @opcode: the opcode
 * @func: function to handle the opcode
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */

typedef struct instr_s
{
	char *opcode;
	void (*func)(stc_t **stack, unsigned int line_number);
} instr_t;

/**
 * struct data_stc - container for var
 * @rf: file to bo opened and read
 * @a: line text
 * @nu: num of line to trrack
 * @tok: store broken down tokens
 * @usex: usable ins
 * @n: tokens num
 * @top: h
 * @numn: num of node in stack
 * @stk: stack
 */
typedef struct data_stc
{
	FILE *rf;
	char *a;
	unsigned int nu;
	char **tok;
	int n;
	instr_t *usex;
	stc_t *top;
	int numn;
	int stk;
} data_s;

extern data_s *momo;

void monty_add(stc_t **, unsigned int);
void close_f(void);
int check_comm(void);
void delete_ele_top(void);
void s_sett_for_instruc(void);
void print_error_message(void);
void reading_f(char *);
void print_stream_message(char *);
void define_momo(void);
int valid_num(char *);
void print_error_for_malloc(void);
void nop_func(stc_t **, unsigned int);
void func_push(stc_t **, unsigned int);
void func_pall(stc_t **, unsigned int);
void func_run(void);
void delete_top(stc_t **, unsigned int);
void func_pint(stc_t **, unsigned int);
void check_argv(int);
void str_to_words(void);
void swap_func(stc_t **, unsigned int);

int dprintf(int, const char *, ...);
ssize_t getline(char **, size_t *, FILE *);
FILE *fdopen(int, const char *);

void free_momo(void);
void free_data_stc(void);
void free_all_mem(void);
void free_stc(stc_t *);
void free_all_toke(void);

void func_for_sub(stc_t **, unsigned int);
void func_for_mult(stc_t **, unsigned int);
void func_for_divid(stc_t **, unsigned int);
void func_for_modules(stc_t **, unsigned int);

void func_print_char(stc_t **, unsigned int);
void func_print_str(stc_t **, unsigned int);

void func_rotate_l(stc_t **, unsigned int);
void func_rotate_r(stc_t **, unsigned int);

void func_to_stack(stc_t **, unsigned int);
void func_to_queue(stc_t **, unsigned int);

#endif
