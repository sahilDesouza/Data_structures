#include "main.h"

//print all stack list elements
int peep(stack_t * head)
{
	if (head == NULL)
   	{
		return STACK_EMPTY;
   	}
     	else
    	{
		printf("Elements are\n");
        	while(head)
        	{
			printf("%d -->%p\n", head->data, head);
			head = head->link;
		}
    	}
	return SUCCESS;
}
//print only stack top element list value
int peek(stack_t * head, data_t * element)
{
	if (head == NULL)
   	{
		return STACK_EMPTY;
   	}
	
	*element = head->data;
	return SUCCESS;
}