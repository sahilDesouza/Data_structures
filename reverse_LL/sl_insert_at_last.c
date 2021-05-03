#include "main.h"

int insert_at_last(slist ** head, data_t data)
{
	slist * new = malloc(sizeof(slist));

	if (new == NULL)
	{
		return FAILURE;
	}

	new->data = data;
	new->link = NULL;

	//if head is null
	if (*head == NULL)
	{
		*head = new;
		return SUCCESS;
	}
	//if more than 1 node is present
	//take a temp pointer
	slist * temp = *head;
	
	//continuosly add the values at last
	while (temp->link != NULL)
	{
		temp = temp->link;
	}
	temp->link = new;	
	return SUCCESS;
}