#include "main.h"

int delete_list(dlist ** head, dlist ** tail)
{
	//check if list is empty or not
	if (*head == NULL)
	{
		return LIST_EMPTY;
	}
	
	dlist * temp = *head;
	dlist * current = NULL;
	//loop node after node and free that particular node
	while (temp->next != NULL)
	{
		current = temp;
		temp = temp->next;
		free(current);
	
	}
	free(temp);
	*head = NULL;
	*tail = NULL;
	return SUCCESS;

}