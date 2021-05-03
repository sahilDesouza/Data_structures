#include "main.h"

void print_slist(slist * head, slist * find)
{
	if (head == NULL)
   	{
		printf("List is Empty\n");
   	}
     	else
    	{
		printf("Elements are\n");
		if (find)
		{
			while(head)
        		{
				if (head == find)
				{
					return;
				}	
				printf("%d -->%p\n", head->data, head);
				head = head->link;	
			}
		}
		else
		{
			while(head)
        		{	
				printf("%d -->%p\n", head->data, head);
				head = head->link;	
			}
		}
    	}
}