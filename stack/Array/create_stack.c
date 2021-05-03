#include "main.h"

//creating the stack
void create_stack(stack_t * stack, data_t size)
{

	stack->top = -1;
	stack->capacity = size;
	stack->item = malloc(size * sizeof(data_t));
	if (stack->item == NULL)
	{
		printf("Memory not allocated\n");
		return 0;
	}
	
	printf("STACK created\n");
}
	
