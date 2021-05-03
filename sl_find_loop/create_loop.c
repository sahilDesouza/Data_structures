#include "main.h"
/*
int create_loop(slist ** head)
{
	//check if list is empty or not
	if (*head == NULL)
	{
		return LIST_EMPTY;
	}
	//create temp pointer to traverse through the nodes
	slist * temp = *head;

	while (temp->link != NULL)
	{
		temp = temp->link;
	}
	//creating loop between last node and 1st
	temp->link = *head;
	return SUCCESS;
}
*/
int find_loop(slist ** head, slist ** find)
{
	//check if head is empty or not
	if (*head == NULL)
	{
		return LIST_EMPTY;
	}
	//if only 1 node present cannot find loop
	if ((*head)->link == NULL)
	{
		return FAILURE;
	}
	//create temp pointer to traverse through the nodes
	slist * temp = *head;
	while (temp->link != NULL)
	{
		//if the last node contains address of 1st node loop found
		if (temp->link == *find)
		{
			return LOOP_FOUND;
		}
		
		temp = temp->link;
	}
	//loop not found since last node contains null
	return LOOP_NOT_FOUND;
}

int create_loop(slist ** head, data_t data, slist ** find)
{
	//check if head is empty or not
	if (*head == NULL)
	{
		return LIST_EMPTY;
	}

	slist * temp = *head; 
    	 
    	while (temp->data != data) 
	{ 
        	temp = temp->link;
			 
    	} 
  
    	// backup the joint point  
    	slist * joint_point = temp;  
  
    	// traverse remaining nodes 
    	while (temp->link != NULL) 
	{
		temp = temp->link;
		
	} 
        // joint the last node to k-th element 
    	temp->link = joint_point;
	*find = joint_point;
	return SUCCESS; 
}
