#include "main.h"


int main()
{
	int choice, status;
	char option;
	data_t data, g_data, n_data;
	dlist * head = NULL;
	dlist * tail = NULL;
	do
	{
		printf("1.Insert at last\n2.insert_after\n3.insert_before\n4.delete element\n5.delete_first\n6.delete_last\n7.delete_list\n8.insert_at_first\n9.print dlist\n");
		printf("Enter your choice:");
		scanf("%d", &choice);
		getchar();
		printf("\n");

		switch (choice)
		{
		case 1:
			printf("Insert at last\n");
			printf("Enter the data: ");
			scanf("%d", &data);
			status = insert_at_last(&head, &tail, data);
			if (status == 1)
			{
				printf("Data Inserted at last\n");
			}
			else
			{
				printf("Data not inserted\n");
			}
			break;
		case 2:
			printf("Insert after\n");
			printf("Enter the data after which you want to insert the given value: ");
			scanf("%d", &g_data);
			printf("Enter the new data: ");
			scanf("%d", &n_data);
			status = insert_after(&head, &tail, g_data, n_data);
			if (status == 2)
			{
				printf("List empty\n");
			}
			else if (status == 3)
			{
				printf("Data not found\n");
			}
			else
			{
				printf("Entry successfull\n");
			}
			break;
				
		case 3:
			printf("Insert before\n");
			printf("Enter the data which you want found: ");
			scanf("%d", &g_data);
			printf("Enter the new data: ");
			scanf("%d", &n_data);
			status = insert_before(&head, &tail, g_data, n_data);
			if (status == 2)
			{
				printf("List empty\n");
			}
			else if (status == 3)
			{
				printf("Data not found\n");
			}
			else
			{
				printf("Entry successfull\n");
			}
			break;
			
		case 4:
			printf("Delete Element\n");
			printf("Enter the data which you want found: ");
			scanf("%d", &g_data);
			status = delete_element(&head, &tail, g_data);
			if (status == 2)
			{
				printf("List empty\n");
			}
			else if (status == 3)
			{
				printf("Element not found\n");
			}
			else
			{
				printf("Element Deleted\n");
			}
			break;
			
		case 5:
			printf("Delete at first selected\n");
			status = delete_at_first(&head, &tail);
			if (status == 2)
			{
				printf("List empty\n");
			}
			else if (status == 1)
			{
				printf("First Element Deleted\n");
			}
			break;
			
		case 6:
			printf("Delete at last selected\n");
			status = delete_at_last(&head, &tail);
			if (status == 2)
			{
				printf("List empty\n");
			}
			else if (status == 1)
			{
				printf("Last Element Deleted\n");
			}
			break;
		
		case 7:
			printf("Delete Entire List selected\n");
			status = delete_list(&head, &tail);
			if (status == 2)
			{
				printf("List empty\n");
			}
			else if (status == 1)
			{
				printf("Entire List Deleted\n");
			}
			
			
			break;
		
		case 8:
			printf("Insert at first\n");
			printf("Enter the new data : ");
			scanf("%d", &n_data);
			status = insert_at_first(&head, &tail, n_data);
			if (status == 2)
			{
				printf("Failed\n");
			}
			else if (status == 1)
			{
				printf("Data succesfully added from last\n");
			}		
			break;
		case 9:
			printf("Printing dlist\n");
			print_dlist(head);
			break;
			
		default:
			printf("Enter a valid option\n");
			break;
		}
		printf("\n");
		//option whether you want to continue or not
		//if 'y' loop through again else break out
            	printf("Do you want to continue y/n:");
            	scanf(" %c", &option);

            	if (option == 'y' || option == 'Y')
            	{
                	continue;
            	}
            	else
            	{
                	break;
            	}

		
	}while (option);
	return 0;
	
}