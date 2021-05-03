#include "main.h"

int bubble_sort(data_t * array, data_t size)
{
	int temp;
	//1st for loop runs till size elements
	for (int i = 0; i < size; i++)
	{
		//2nd for loop runs size-i times
		//which means that the largest element is last, 2nd largest 2nd last
		//and soo on
		for (int j = 0; j < size - i - 1  ; j++)
		{
			//1st index element compare with the next
			//if its greater then swap the element
			if (array[j] > array[j+1])
			{
				temp = *(array + j);
				*(array + j) =  *(array + j + 1);
				*(array + j + 1 ) = temp;
				
			}
			
		}
		
	}
	return SUCCESS;
	

}