#include "main.h"

int delete_at_first(slist ** head)
{
	//check if list is empty or not
	if (*head == NULL)
	{
		return LIST_EMPTY;
	}
	//create temp pointer to get first node address
	slist * temp = *head;

	//2nd node address equal to head
	*head = temp->link;
	
	//clearing first node
	free(temp);
	return SUCCESS;
}