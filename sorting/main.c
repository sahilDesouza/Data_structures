#include "main.h"

int main()
{
	//Declare the variables
	
	data_t size;
	
	int option, status;
	
	while(1)
	{
		printf("Enter the size of the array:");
		scanf("%d", &size);
		data_t * array = malloc(size * sizeof(int));
		populate(array, size);
		//Prompt to select an option
		printf("1.Selection Sort\n2.Bubble sort\n3.insertion sort\n4.Exit\n");
		printf("Enter your choice:");
		scanf("%d", &option);

		switch (option)
		{
			case 1:
				
				//Calling the enque function
				status = selection_sort(array, size);
				//Displaying result based on the return status from the function
				if (status == SUCCESS)
                		{
					printf("Array sorted using selection sort\n");
				     	for (int i = 0; i < size; i++)
					{
						printf("%d ", *(array + i));
					}
					printf("\n");
               			}
                		else
                		{
                     		printf("Array not sorted\n");
                		}
               			break;
			case 2:

				//Calling the deque function
				status = bubble_sort(array, size);
				//Displaying result based on the return status from the function
				if (status == SUCCESS)
				{
					printf("Array Bubble sorted\n");
					for (int i = 0; i < size; i++)
					{
						printf("%d ", *(array + i));
					}
					printf("\n");
				}
				else
				{
					printf("Array not sorted\n");
				}
				break;

			case 3:
				//Calling the print queue function
				status = insertion_sort(array, size);
				//Displaying result based on the return status from the function
				if (status == SUCCESS)
				{
					printf("Array sorted using insertion sort\n");
					for (int i = 0; i < size; i++)
					{
						printf("%d ", *(array + i));
					}
					printf("\n");
				}
				else
				{
					printf("Array not sorted\n");
				}
				
				break;

			case 4:
				//Exiting the loop
				return 0;

			default:
				printf("Select a valid option\n");
		}
	}
}