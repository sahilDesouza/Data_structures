#include "main.h"

int main()
{
	//Declare the variables
	slist *head = NULL;
	slist *rear = NULL;
	data_t data, mid = 0, *array, size;
	int option, status;


	printf("Enter the size of the array: ");
	scanf("%d", &size);
	//Define the allocation of memory to the array during runtime
	array = (int *)malloc(size * sizeof(int));
	//call function to populate the item values
	populate(array, size);
	//Prompt + read the value
	printf("Enter the Key: ");
	scanf("%d", &data);
	while(1)
	{
		//Prompt to select an option
		printf("1.Binary Search using Iterative method\n2.Binary Search using Recursive method\n3.Exit\n");
		printf("Enter your choice:");
		scanf("%d", &option);

		switch (option)
		{
			case 1:
				
				//Calling the enque function
				status = i_binary_search(array, size, data, &mid);
				//Displaying result based on the return status from the function
				if (status == KEY_FOUND)
                		{
					printf("Key found\n\n");
				      	printf("Key found at index %d \n\n", mid);
               			}
                		else
                		{
                     			printf("Key not found\n\n");
                		}
               			break;
			case 2:

				//Calling the deque function
				status = R_binary_search(array, data, size - 1, 0, &mid);
				//Displaying result based on the return status from the function
				if (status == KEY_FOUND)
				{
					printf("Key found\n\n");
				      	printf("Key found at index %d \n\n", mid);
				}
				else
				{
					printf("Key not found\n\n");
				}
				break;

			case 3:
				//Exiting the loop
				return 0;

			default:
				printf("Select a valid option\n");
		}
	}
}