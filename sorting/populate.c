#include "main.h"

void populate(data_t * arr, data_t size)
{
	
	//Prompt + read the values of the array
	printf("Enter the array elements: ");
	for (int i = 0; i < size; i++)
	{
		scanf("%d", arr + i);
	}
	printf("\n");
}