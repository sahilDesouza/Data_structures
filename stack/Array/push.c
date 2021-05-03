#include "main.h"
//function call to push elements into the stack
int push(stack_t * stack, data_t element)
{
	if (stack->top == stack->capacity - 1)
	{
		return STACK_OVERFLOW;
	}
	++(stack->top);
	stack->item[stack->top] = element;
	return SUCCESS;
		
}
//function call to remove elements from the stack
int pop(stack_t * stack, data_t * element)
{
	if (stack->top == - 1)
	{
		return STACK_EMPTY;
	}
	*element = stack->item[stack->top];
	--stack->top;
	return SUCCESS;
}