#include "main.h"

int insert_after(slist ** head, int g_data, int n_data)
{
	//check if list is empty or not
	if (head == NULL)
	{
		return LIST_EMPTY;
	}
	//create temp pointer to traverse through the nodes
	slist * temp = *head;

	//iterate through entire node
	while (temp)
	{
		//if temp data = given data the insert node after
		if(temp->data == g_data)
		{
			slist * new = malloc(sizeof(slist));
			new->data = n_data;
			new->link = temp->link;
			temp->link = new;
			return SUCCESS;
		}
		temp = temp->link;
	}
	return DATA_NOT_FOUND;
}