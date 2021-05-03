#include "main.h"

//print all stack elements
int peep(stack_t * stack)
{
	//Check for stack FULL or NOT
	if (stack->top == stack->capacity - 1)
	{
		return STACK_OVERFLOW;
	}
	//Assigning the top value to a local variable top for use in printing	 
	data_t top = (stack->top);
	printf("The elements are:\n");
	//Displaying elements till top is zero
	while(top >= 0)
	{
		printf("%d\n", stack->item[top]);
		top--;
	}
	return SUCCESS;
}
//function call to view only the first element
int peek(stack_t * stack, data_t * element)
{
	if (stack->top == - 1)
	{
		return STACK_EMPTY;
	}
	*element = stack->item[stack->top];
	return SUCCESS;
}
//function call to free the stack
int free_stack(stack_t * stack)
{
	if (stack->top == - 1)
	{
		return STACK_EMPTY;
	}
	stack->capacity = 0;
	stack->top = -1;
	free(stack->item);
	stack->item = NULL;
}