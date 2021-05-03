#include "main.h"

int delete_element(slist ** head, data_t g_data)
{
	//check if head is empty or not
	if (*head == NULL)
	{
		return LIST_EMPTY;
	}
	//create temp pointer to traverse through the nodes
	slist * temp = *head;
	//prev holds address of previous node
	slist * prev = NULL;

	while (temp)
	{
		//if data match found free the node
		if (temp->data == g_data)
		{
			prev->link = temp->link;
			free(temp);
			return SUCCESS;
			
		}
		prev = temp;
		temp = temp->link;
		
	}
	return DATA_NOT_FOUND;
	
}
