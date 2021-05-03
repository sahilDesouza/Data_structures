#include "main.h"

int delete_at_first(dlist ** head, dlist ** tail)
{
	//check if list is empty or not
	if (*head == NULL)
	{
		return LIST_EMPTY;
	}
	//initital condition to check if only 1 node is present
	if ((*head)->next == NULL)
	{
		//if only 1 present the head should be NULL
		free(head);
		*head = NULL;
		*tail = NULL;
		return SUCCESS;
	}
	//creating temp pointer
	dlist *temp = *head;
	*head = temp->next;
	free(temp);
	(*head)->prev = NULL;
	return SUCCESS;
}