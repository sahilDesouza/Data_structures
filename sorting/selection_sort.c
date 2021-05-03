#include "main.h"

int selection_sort(data_t * array, data_t size)
{
	int i, j, current_min; 
  
    	//One by one move boundary of unsorted subarray
	//size-1 because last element is not needed to be compared 
    	for (i = 0; i < size-1; i++) 
    	{ 
        	// Find the minimum element in unsorted array 
        	current_min = i; 
        	for (j = i + 1; j < size; j++)
		{
			//compare min element with each j indexed element
			//if current min value is greater than update that current min value to j
			if (array[j] < array[current_min])
			{
				//update current min and compare again to check if its the smallest element
				current_min = j;
			}
            		 
		}
        	//Swap the found minimum element with the first element 
        	swap(&array[current_min], &array[i]); 
    	} 
	return SUCCESS;
    
}
