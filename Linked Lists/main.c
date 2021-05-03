#include "main.h"


int main()
{
	int choice, status;
	char option;
	data_t data, g_data, n_data;
	slist * head = NULL, * mid = NULL, * value = NULL;
	do
	{
		printf("1.Insert at last\n2.insert_after\n3.insert_before\n4.find_node\n5.delete_first\n6.delete_last\n7.delete_list\n8.insert_at_first\n9.find mid\n10.print slist\n");
		printf("11.get n from last\n");
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
			status = insert_at_last(&head, data);
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
			status = insert_after(&head, g_data, n_data);
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
			printf("Insert after\n");
			printf("Enter the data before which you want to insert the given value: ");
			scanf("%d", &g_data);
			printf("Enter the new data: ");
			scanf("%d", &n_data);
			status = insert_before(&head, g_data, n_data);
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
			printf("Insert after\n");
			printf("Enter the data which you want found: ");
			scanf("%d", &g_data);
			status = find_node(&head, g_data);
			if (status == 2)
			{
				printf("List empty\n");
			}
			else if (status == 3)
			{
				printf("Data not found\n");
			}
			else if (status == 1)
			{
				printf("Data found\n");
			}
			break;

		case 5:
			printf("Delete at first selected\n");
			status = delete_at_first(&head);
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
			printf("Delete after selected\n");
			status = delete_at_last(&head);
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
			status = delete_list(&head);
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
			printf("Insert after\n");
			printf("Enter the new data : ");
			scanf("%d", &n_data);
			status = insert_at_first(&head, n_data);
			if (status == 2)
			{
				printf("List empty\n");
			}
			else if (status == 1)
			{
				printf("Data succesfully added from first\n");
			}
			break;
		
		case 9:
			printf("Finding mid Element\n");
			status = find_mid(&head, &mid);
			
			if (status == 2)
			{
				printf("List empty\n");
				
			}
			else if (status == 1)
			{
				printf("Data succesfully added from first\n");
				printf("%d\n", mid->data);
			}
			break;
		case 10:
			printf("Printing slist\n");
			print_slist(head);
			break;
		case 11:
			printf("Finding nth last Element\n");
			printf("Enter the value of n : ");
			scanf("%d", &n_data);
			status = get_nth_from_last(&head, n_data, &value);
			
			if (status == 2)
			{
				printf("List empty\n");
				
			}
			else if (status == 1)
			{
				printf("Data found :%d\n", value->data);
			}
			else if (status == 0)
			{
				printf("Out of bounds\n");
			}
			break;
		case 12:
			printf("Sorting List\n");
			status = sort_list(&head);
			if (status == 2)
			{
				printf("List empty\n");
				
			}
			else
			{
				printf("List sorted\n");
			}
			break;
		case 13:
			printf("Insertion Sort\n");
			printf("Enter the value of n : ");
			scanf("%d", &n_data);
			status = inserted_sort(&head, n_data);
			if (status == 3)
			{
				printf("Data Not found\n");
				
			}
			else
			{
				printf("Data Inserted\n");
			}
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