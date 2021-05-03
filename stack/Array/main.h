#include <stdio.h>
#include <stdlib.h>
/*
#define SUCCESS 0
#define FAILURE -1
#define STACKEMPTY -2
#define STACKFULL -3
//#define STACKSIZE 25
*/

typedef int data_t;
typedef struct
{
	int top;
	data_t *item;
	unsigned int capacity;
}stack_t;

enum status
{
	FAILURE,
	SUCCESS,
	STACK_OVERFLOW,
	STACK_EMPTY
};

int push(stack_t *, data_t);
//int pop(stack_t *, data_t *);
int peep(stack_t *);
int peek(stack_t *, data_t *);
void create_stack(stack_t *, data_t);
int pop(stack_t *, data_t * );
int free_stack(stack_t *);
