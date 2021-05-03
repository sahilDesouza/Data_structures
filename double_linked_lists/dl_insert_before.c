#include "main.h"

int insert_before(dlist ** head, dlist ** tail ,int g_data, int n_data)
{
	//check if list is empty or not
	if (*head == NULL)
	{
		return LIST_EMPTY;
	}
	//create a new node
	dlist * new = malloc(sizeof(dlist));

	new->prev = NULL;
	new->next = NULL;
	
	//pointer to iterate through the dl list
	dlist * temp = *head;
		
	while (temp)
	{
		//if matched with given data
		//first update the create node
		//update data, prev add and next add
		if(temp->data == g_data)
		{
			new->data = n_data;
			new->next = temp;
			new->prev = temp->prev;

			//if prev node doesnt point to null the link prev node to the new one
			if (temp->prev)
			{
				temp->prev->next = new;
			}
			else
			{
				*head = new;
			}
			//prev nodes address updated to new
			temp->prev = new;

			return SUCCESS;
		}
		//if match not found move to next node
		temp = temp->next;
	}
	return DATA_NOT_FOUND;
}