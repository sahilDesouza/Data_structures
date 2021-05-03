#include "main.h"

int remove_duplicates(slist ** head)
{
	if (*head == NULL)
	{
		return LIST_EMPTY;
	}
	slist *ptr1, *ptr2 = NULL, *dup; 
    	ptr1 = *head; 
	int status;
    	/* Pick elements one by one */
    	while (ptr1 != NULL && ptr1->link != NULL) 
    	{ 
        	ptr2 = ptr1; 
  
        	// Compare the picked element with rest of the elements 
        	while (ptr2->link != NULL) 
        	{ 
            		/* If duplicate then delete it */
            		if (ptr1->data == ptr2->link->data) 
            		{ 
                		// sequence of steps is important here 
                		dup = ptr2->link;
                		//ptr2->link = ptr2->link->link; 
				printf("%d\n", dup->data);
                		delete_element(head, dup->data);	
            		} 
            		else
			{
				ptr2 = ptr2->link;
			} 
        	} 
        	ptr1 = ptr1->link; 
    	} 
	return SUCCESS;	
}
