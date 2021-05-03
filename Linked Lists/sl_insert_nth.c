#include "main.h"

int insert_nth(slist ** head, data_t n, data_t n_data)
{
	data_t i = 1;
	//check if list is empty or not
	if (*head == NULL)
	{
		return LIST_EMPTY;
	}
	//create new node
	slist *new = malloc(sizeof(slist));
	
	slist * temp = *head;
	slist * prev = NULL;
	
	//iterate through entire node
	while (temp)
	{
		//once reached nth node enter the data after it
		if (i == n)
		{
			prev->link = new;
			prev->link->link = temp;
			new->data = n_data;
			return SUCCESS;
		}
		prev = temp;
		temp = temp->link;
		i++;
	}
	return FAILURE;
}