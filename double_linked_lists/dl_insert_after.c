#include "main.h"

int insert_after(dlist ** head, dlist ** tail ,int g_data, int n_data)
{
	//check if list is empty or not
	if (*head == NULL)
	{
		return LIST_EMPTY;
	}
	//creating new node
	dlist * new = malloc(sizeof(dlist));

	new->prev = NULL;
	new->next = NULL;

	//creating temp pointer
	dlist * temp = *head;
	
	/*
	if ((*head)->next == NULL)
	{
		new->data = n_data;
		temp->next = new;
		new->prev = temp;
		*tail = new;
		return SUCCESS;
		
	}
	*/
	//loop to iterate till last node	
	while (temp)
	{
		//if matches with given data then insert it after the given data
		if(temp->data == g_data)
		{
			//updating the values of the newly created node
			new->data = n_data;
			new->next = temp->next;
			new->prev = temp;
			
			//if next node doesnt point to null the link next node to the new one
			if (temp->next)
			{
				temp->next->prev = new;
			}
			else
			{
				//update tail
				*tail = new;
			}
			
			temp->next = new;

			return SUCCESS;
		}
		//if match not found move to next node
		temp = temp->next;
	}
	return DATA_NOT_FOUND;
}