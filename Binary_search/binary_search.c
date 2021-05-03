#include "main.h"

//Defining the sort function
void i_sort(data_t *a, data_t lim)
{
	int temp, i, j;
	//using bubble sort algorithm
	for (i = 0; i < lim; i++)
	{
		for (j = 0; j < lim; j++)
		{
			if (*(a + i) < *(a + j))
			{
				temp = *(a + i);
				*(a + i) = *(a + j);
				*(a + j) = temp;
			}
		}
	}
}

//Defining the binary search function
int i_binary_search(data_t *a, data_t lim, data_t key, data_t * result)
{
	//initialising star point and end point
	int begin = 0;
	int end = lim - 1;
	int mid;

	//looping untill condition fails
	while (begin <= end)
	{	
		//calculates the mid index using the starting and ending points
		mid = (begin + end) / 2;

		//if key value is greater than the value at mid index
		if (key > *(a + mid))
		{
			//then update begin index
			begin = mid + 1;
		}
		//if key value is less than the value at mid index
		else if (key < *(a + mid))
		{
			//then update end index
			end = mid - 1;
		}
		//if key value is matched with the value in the array
		else if (*(a + mid) == key)
		{
			//returns index position and key is found
			*result = mid;
			return KEY_FOUND;
		}
	}
	//if it fails the key not found
	return KEY_NOT_FOUND;
}
//Defining the binary search function for recursive
int R_binary_search(data_t *a, data_t key, data_t end, data_t begin ,data_t * result)
{
	int mid;
	//looping untill condition fails
	if (begin > end)
	{
		//if it fails the key not found
		return KEY_NOT_FOUND;
	}	
	mid = (begin + end) / 2;
	//if key value is greater than the value at mid index
	if (key > *(a + mid))
	{
		//begin = mid + 1;
		//update begin value and call function again
		R_binary_search(a, key, end, (mid + 1), result);
	}
	//if key value is less than the value at mid index
	else if (key < *(a + mid))
	{
		//update end value and call function again
		//end = mid - 1;
		R_binary_search(a, key,  (mid - 1), begin, result);
	}
	//base conditon function terminates once is found
	else if (*(a + mid) == key)
	{

		*result = mid;
		return KEY_FOUND;
	}	
}