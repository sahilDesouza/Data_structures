#include "main.h"

int search_hash_table(hash_t * arr, data_t data)
{
	//find at what index that data is present
	data_t index = data % SIZE;
	//if data is found at the key value then data is found
	if (arr[index].value == data)
	{
		return DATA_FOUND;
	}
	hash_t * temp = arr[index].link;
	//if its not at the key position we will check if the link is null or not
	//if it is not null then we will iterate through all the nodes untill the nodes point to null
	while (temp)
	{
		//if we find the data return data found
		if (temp->value == data)
		{
			return DATA_FOUND;
		}
		//update temp
		temp = temp->link;
		
	}
	//if we find dont find the data return data not found
	return DATA_NOT_FOUND;
}