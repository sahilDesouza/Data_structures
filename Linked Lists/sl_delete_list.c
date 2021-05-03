#include "main.h"

int delete_list(slist ** head)
{
	if (*head == NULL)
	{
		return LIST_EMPTY;
	}
	
	slist * temp = NULL;
	slist * current = *head;
	//loop to traverse through all the nodes 
	//each time clearing the nodes as we go further till the end
	while (current->link != NULL)
	{
		temp = current;
		current = current->link;
		free(temp);
		
	}
	//current points to last node
	//freeing that node and head is set to NULL
	free(current);
	*head = NULL;
	return SUCCESS;

}