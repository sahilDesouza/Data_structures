#include "main.h"
/*
int delete_element(hash_t * arr, data_t data)
{
	hash_t * temp, * prev = NULL;
	for (int i = 0; i < SIZE; i++)
    	{
		if (arr[i].value == data)
		{
			arr[i].value = -1;
			return SUCCESS;
		}
		else if (arr[i].link != NULL)
		{
			temp = arr[i].link;
			if (arr[i].value == data)
			{
				arr[i].value = -1;
				return SUCCESS;
			}
			while (temp)
			{
				if (temp->value == data)
				{
					prev->link = temp->link;
					free(temp);
					return SUCCESS;
				}
				prev = temp;
				temp = temp->link;
				
			}	
		}
    	}
	return DATA_NOT_FOUND;
}
*/
int delete_element(hash_t * arr, data_t data)
{
	//find at what index that data is present
	data_t index = data % SIZE;
	//if at that key value data is -1 it means data not present
	if (arr[index].value == -1)
	{
		return DATA_NOT_FOUND;
	}
	//if at that key value data isnt -1 it means data is present
	if (arr[index].value == data)
	{	
		//check if at that key value the link value is null or not
		//if it is null then update to -1
		if (arr[index].link == NULL)
		{
			arr[index].value = -1;
			return SUCCESS;
		}
		//if it is not null the we need to update the next node value withe the value at that index
		//and free the next node value
		hash_t * temp = arr[index].link, *prev = NULL;
		arr[index].value = temp->value;
		//if multiple are present
		//then we update current node value with the next
		while (temp->link)
		{
			temp->value = temp->link->value;
			prev = temp;
			temp = temp->link;
		}
		//updating last 2nd last node link to null
		prev->link = NULL;
		//freeing last node 
		free(temp);
		return SUCCESS;
	}

	hash_t * temp = arr[index].link, *prev = NULL;
	
	//Check for first node
	//if first node data found 
	if (arr[index].link->value == data)
	{
		//set hash maps node index to the temp->link node
		//soo if only 1 node is present itll be replaced by null
		//or address of the next node
		arr[index].link = temp->link;
		//after that free that node
		free(temp);
		return SUCCESS;
	}
	//if multiple nodes are present
	while (temp)
	{
		//if data match found free the node
		if (temp->value == data)
		{
			prev->link = temp->link;
			free(temp);
			return SUCCESS;
		}
		prev = temp;
		temp = temp->link;
		
	}
	//if none of the conditions are satisfied then return data not found
	return DATA_NOT_FOUND;
}
