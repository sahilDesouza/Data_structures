#include "main.h"

void print_slist(slist * head)
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
			printf("%d -->%p\n", head->data, head);
			head = head->link;
		}
    	}
}