#include "main.h"

int enque(slist **head, slist **rear, data_t data)
{
	//Create node
	slist *new = malloc(sizeof(slist));

	//Validation
	if (new == NULL)
	{
		return QUEUE_FULL;
	}

	//Check for list empty or not
	if (*head == NULL)
	{
		new->data = data;
		//Assigning the address of the node itself
		new->link = new;
		//Assigning the new node to the pointer		
		*head = new;			
		*rear = new;
		return SUCCESS;
	}
	else
	{
		//Take a temporary pointer
		slist *temp = *rear;
		//Insert the data
		new->data = data;
		//Assigning the previous link address to the new node link pointer thereby creating a loop			
		new->link = temp->link;
		//Updating the head node with the new node address		
		temp->link = new;
		//Moving the head pointer to the new node			
		*rear = new;				
		return SUCCESS;
	}
}