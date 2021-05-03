#include "main.h"

//function call to push elements into the stack list
int push(stack_t ** head, data_t data)
{
	stack_t * new = malloc(sizeof(stack_t));

	if (new == NULL)
	{
		return STACK_EMPTY;
	}

	new->data = data;
	new->link = *head;
	*head = new;
	return SUCCESS;

}