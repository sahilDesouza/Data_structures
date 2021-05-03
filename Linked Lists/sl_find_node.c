#include "main.h"

int find_node(slist ** head, int g_data)
{
	//check if list is empty or not
	if (head == NULL)
	{
		return LIST_EMPTY;
	}
	//create temp pointer to traverse through the nodes
	slist * temp = *head;

	//continuously traverse untill we get a match
	//if not return data not found
	while (temp)
	{
		if(temp->data == g_data)
		{
			return SUCCESS;
		}
		temp = temp->link;
	}
	return DATA_NOT_FOUND;
}