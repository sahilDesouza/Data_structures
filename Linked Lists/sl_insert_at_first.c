#include "main.h"


int insert_at_first(slist ** head, data_t data)
{
	/*
	if (*head == NULL)
	{
		return LIST_EMPTY;
	}
	*/
	//create node
	slist * new = malloc(sizeof(slist));
	//Validation
	if (new == NULL)
	{
		return FAILURE;
	}
	//insert at first node logic
	new->data = data;
	new->link = *head;
	*head = new;
	return SUCCESS;

}