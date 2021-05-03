#include"main.h"

int insert_before(slist ** head, int g_data, int n_data)
{
	//check if list is empty or not
	if (*head == NULL)
	{
		return LIST_EMPTY;
	}
	//create new node
	slist * new = malloc(sizeof(slist));
	slist * temp = *head;

	//condition for only 1 node
	if (temp->data == g_data)
	{
		new->data = n_data;
		new->link = *head;
		*head = new;
		return SUCCESS;
		
	}
	//hold previous node address
	slist * prev = NULL;

	//traverse untill matched
	//if matches insert it before matched node
	while (temp)
	{
		if (temp->data == g_data)
		{
			new->data = n_data;
			new->link = temp;
			prev->link = new;
			return SUCCESS;
		}
		prev = temp;
		temp = temp->link;
		
		
	}
	return DATA_NOT_FOUND;
	
}
