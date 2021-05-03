#include "main.h"

int delete_element(dlist ** head, dlist ** tail, data_t g_data)
{
	//check if list is empty or not
	if (*head == NULL)
	{
		return LIST_EMPTY;
	}
	dlist * temp = *head;
	
	//Check for first node
	if ((*head)->data == g_data)
	{
		return delete_at_first(head, tail);
	}
	//multiple nodes
	while (temp)
	{
		//if matched withgiven element then delete that node and update previous and next node
		if (temp->data == g_data)
		{
			temp->prev->next = temp->next;
			if (temp->next != NULL)
			{
				temp->next->prev = temp->prev;
			}
			
			free(temp);
			return SUCCESS;
			
		}
		temp = temp->next;
		
	}
	return DATA_NOT_FOUND;
}