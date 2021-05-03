#include "main.h"


int insert_at_first(dlist ** head, dlist **tail ,data_t n_data)
{
	//Create a node
	dlist * new = malloc(sizeof(dlist));
	if (new == NULL)
	{
		return FAILURE;
	}
	//Assigning the data value and addresses to the node
	new->data = n_data;
	new->prev = NULL;
	new->next = *head;
	//for only 1 node
	if (*head == NULL)
	{
		//update head and tail
		*tail = new;
		*head = new;
		return SUCCESS;
	}
	//for multiple nodes
	//Assigning the address of the created node to the head pointer 
	(*head)->prev = new;
	*head = new;
	return SUCCESS;

}
