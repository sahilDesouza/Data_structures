#include "main.h"

void print_dlist(dlist * head)
{
	if (head == NULL)
   	{
		printf("List is Empty\n");
   	}
     	else
    	{
		printf("Elements are\n");
        	while(head)
        	{
			printf("%d -->prev -->%p -->next -->%p\n", head->data, head->prev,  head->next);
			//printf("%p\n", head);
			head = head->next;
		}
    	}
}