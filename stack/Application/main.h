#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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

void push(stack_t *, char);
char pop(stack_t *);
char peek(stack_t *);
void create_stack(stack_t *, data_t);
int isEmpty(stack_t * );

