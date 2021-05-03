#include "main.h"

int delete_at_last(slist ** head)
{
	if (*head == NULL)
	{
		return LIST_EMPTY;
	}
	//create temp pointer to traverse through the nodes
	slist * temp = *head;
	//condition to check if theres only 1 node present
	if (temp->link == NULL)
	{
		free(head);
		*head = NULL;
		return SUCCESS;
	}
	//holds previous node address
	slist * prev = NULL;
	
	//traverse to last node and free that node
	while (temp->link != NULL)
	{
		prev = temp;
		temp = temp->link;
	}
	free(temp);
	prev->link = NULL;
	return SUCCESS;
}