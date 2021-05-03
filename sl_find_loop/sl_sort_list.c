#include "main.h"

int sort_list(slist ** head)
{
	//check if list is empty or not
	if (head == NULL)
	{
		return LIST_EMPTY;
	}

	slist * temp = *head;
	data_t count = 0;
	//finding total number of elements
    	while(temp)
    	{

        	temp = temp->link;
		count++;
        }
	//printf("%d\n", count);
	if (count == 1)
	{
		return SUCCESS;
	}
	
	temp = *head;
	int value;
	//using bubble sort algorithm
    	for (int i = 0; i < count; i++)
    	{
        	for (int j = 0; j < count - i - 1; j++)
        	{
            		if (temp->data > temp->link->data)
            		{
				value = temp->link->data;
				temp->link->data = temp->data;
				temp->data = value;
            		}
			temp = temp->link;
           	}
		temp = *head;
        }
	return SUCCESS;
}

int inserted_sort(slist ** head, data_t n_data)
{
	//check if list is empty or not
	if (head == NULL)
	{
		return LIST_EMPTY;
	}
	//sort the list before inserting
	sort_list(head);
	slist * new = malloc(sizeof(slist));

	//create temp pointer to traverse through the nodes
	slist * temp = *head;
	
	//inititially if 1 node present and inserted a value lesser than data in the 1st node then this will run first
	if (temp->link == NULL && (temp->data > n_data))
	{
		new->data = n_data;
		new->link = temp;
		temp->link = NULL;
		*head = new;
		return SUCCESS;
	}
	
	temp = *head;
	while (temp)
	{
		//if only 1 node present and n_data is greater than node data
		//or inserted at last node
		if (temp->link == NULL && (temp->data < n_data))
		{
			new->data = n_data;
			new->link = NULL;
			temp->link = new;
			return SUCCESS;
		}
		//condition for mulitple nodes
		if ((temp->data < n_data) && (temp->link->data > n_data))
		{
			new->data = n_data;
			new->link = temp->link;
			temp->link = new;
			return SUCCESS;
		}	
		//if n_data is already present
		if (n_data == temp->data)
		{
			DATA_PRESENT;
		}
		//increment pointer	
		temp = temp->link;
	}
	return DATA_NOT_FOUND;




}