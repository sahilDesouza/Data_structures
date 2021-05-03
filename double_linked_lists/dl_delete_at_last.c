#include "main.h"

int delete_at_last(dlist ** head, dlist ** tail)
{
	//check if list is empty or not
	if (*head == NULL)
	{
		return LIST_EMPTY;
	}
	//set tail to temp
	dlist * temp = *tail;
	//use tail address to delete last element in the list
	if ((*head)->next == NULL)
	{
		free(head);
		*head = NULL;
		*tail == NULL;
		return SUCCESS;
	}
	*tail = temp->prev;
	temp->prev->next = NULL;
	free(temp);
	return SUCCESS;
}