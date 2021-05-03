#include "main.h"

int insert_at_last(dlist ** head, dlist ** tail, data_t data)
{
	//Create a node
	dlist * new = malloc(sizeof(dlist));

	if (new == NULL)
	{
		return FAILURE;
	}

	new->data = data;
	new->next = NULL;
	new->prev = NULL;

	//check if list is initially empty
	if (*head == NULL)
	{
		//update head and tail
		*head = new;
		*tail = new;
		return SUCCESS;
	}
	//if more than 1 node is present
	//take a temp pointer
	//dlist * temp = *head;
	(*tail)->next = new;
	new->prev = *tail;
	*tail = new;
	return SUCCESS;
}