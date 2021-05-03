#include "main.h"
//function call to remove elements from the stack list
int pop(stack_t ** head, data_t * element)
{
	if (*head == NULL)
	{
		return STACK_EMPTY;
	}
	stack_t * temp = *head;
	*head = temp->link;
	*element = temp->data;
	free(temp);
	return SUCCESS;
}