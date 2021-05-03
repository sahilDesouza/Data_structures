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
	//Calling the sorting funtion
	i_sort(arr, size);

	//Display the sorted array
	printf("Sorted array: ");
	for (int i = 0; i < size; i++)
	{
		printf("%d ", *(arr + i));
	}
	printf("\n");

}