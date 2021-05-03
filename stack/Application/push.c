#include "main.h"
//function call to push elements into the stack
void push(stack_t * stack, char element)
{
	stack->item[++stack->top] = element;
		
}
//function call to remove elements from the stack
char pop(stack_t * stack)
{
	if (!isEmpty(stack))
	{
		return stack->item[stack->top--];
	} 
    	return '$'; 
}