#include "main.h"

int insertion_sort(data_t * array, data_t size)
{
	int i, j, key;
	for (i = 1; i < size; i++)
	{
		//always consider the i+1 th element as the key value 
		key = array[i];
		//Inorder to compare the i+1th element with the previous index
		j = i - 1;
		//continuosly compare the previous index values
		//and well do this until j is not negative 
		while (array[j] > key && j >= 0)
		{
			//update j+1th element with the larger element
			array[j+1] = array[j];
			//need to decrement index each time
			j = j-1;
		}
		//finally update key element at the j+1th index
		array[j+1] = key;
		

	}
	return SUCCESS;
	
	
}