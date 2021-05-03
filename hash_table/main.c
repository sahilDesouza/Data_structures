#include "main.h"

int main()
{
	//Declare the variables
	
	data_t data, status;
	hash_t array[SIZE];
	int option;
	printf("Creating Hash Table\n");
	create_hash_table(array);
	
	while(1)
	{
		
		//Prompt to select an option
		printf("1.Insert element in HT\n2.Search element in HT\n3.Delete entire HT\n4.print HT\n5.Delete element in HT\n6.Exit\n");
		printf("Enter your choice:");
		scanf("%d", &option);
		printf("\n");
		switch (option)
		{
			case 1:
				
				//Calling the insert_hash_table function
				printf("Inserting node in the Hash Map\n");
				printf("Enter the value:");
				scanf("%d", &data);
				status = insert_hash_table(array, data);
				if (status == 1)
				{
					printf("Data added to the Hash map\n\n");
				}
				else
				{
					printf("Data not added\n\n");
				}
				break;
			case 2:
				//Calling the search_hash_table function
				printf("Searching node in the Hash Map\n");
				printf("Enter the value to be Deleted:");
				scanf("%d", &data);
				status = search_hash_table(array, data);
				if (status == 3)
				{
					printf("Data found\n\n");
				}
				else
				{
					printf("Data not Found\n\n");
				}
				break;
			case 3:
				
				//Calling the delete_hash_table function
				printf("Searching min node in the bst\n");
				status = delete_hash_table(array);
				if (status == 1)
				{
					printf("Hash Table Deleted\n\n");
				}
				break;
			
			
			case 4:
				//Calling the print_hash_table function
				printf("printing nodes in the bst\n");
				print_hash_table(array);
				printf("\n\n");
				break;
			
			case 5:
				//Calling the delete_element function
				printf("Deleting Element in the Hash Map\n");
				printf("Enter the value to be Deleted:");
				scanf("%d", &data);
				status = delete_element(array, data);
				if (status == 1)
				{
					printf("Data Deleted\n\n");
				}
				else
				{
					printf("Data not Found\n\n");
				}
				break;
			case 6:
				//Exiting the loop
				return 0;

			default:
				printf("Select a valid option\n");
		}
	}
}
