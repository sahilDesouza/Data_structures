#include "main.h"

int delete_hash_table(hash_t * arr)
{
	//intitialse 2 pointers
	hash_t * temp, * next = NULL;
	//iterating through entire hash map
	for (int i = 0; i < SIZE; i++)
	{
		//set the value of link
		temp = arr[i].link;
		//set the value at that key to -1
		arr[i].value = -1;
		//set the value at that link to null
		arr[i].link = NULL;
		//if multiple nodes are present then we need to free them
		while (temp)
		{
			//next points to the next node
			next = temp->link;
			//and we free the current node
			free(temp);
			temp = next;
		}
	}
	//once hash table is reset return success
	return SUCCESS;
	
}