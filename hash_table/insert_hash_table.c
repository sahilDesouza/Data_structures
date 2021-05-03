#include "main.h"

int insert_hash_table(hash_t * arr, data_t data)
{
	//find at what index that data is to be inserted
	data_t index = data % SIZE;
	//if that key value is -1
	//then update it to data
	if (arr[index].value == -1)
	{
		arr[index].value = data;
		return SUCCESS;
	}
	//allocating memory for the new node
	hash_t *new = malloc(sizeof(hash_t));
	if (new == NULL)
	{
		return FAILURE;
	}
	//update the new node with data, its index
	new->value = data;
	new->key = index;
	new->link = NULL;

	//if its not -1 that means another value is already present
	//therefore create a new node and update link to the new nodes address
	//condition if link is null
	if (arr[index].link == NULL)
	{
		//update link with the address of the new node
		arr[index].link = new;
		return SUCCESS;
	}
	hash_t *temp = arr[index].link;
	//if multiple nodes are present then iterate untill null
	//similar to insert at last function
	while (temp->link != NULL)
	{
		temp = temp->link;
	}
	//update last node address with new
	temp->link = new;
	return SUCCESS;
	
}