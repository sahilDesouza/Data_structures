#include "main.h"


int main()
{
	int choice, status;
	char option;
	data_t data, g_data, n_data, count;
	slist * head = NULL, * mid = NULL, *find = NULL;
	do
	{
		printf("1.Insert at last\n2.create_loop\n3.find_loop\n4.print slist\n");
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
			printf("Before creating sorting list\n");
			sort_list(&head);
			printf("Create Loop\n");
			printf("Enter the data where you want loop inserted: ");
			scanf("%d", &data);
			status = create_loop(&head, data, &find);
			if (status == 2)
			{
				printf("List empty\n");
			}
			else
			{
				printf("Loop creation successfull\n");
			}
			break;
		case 3:
			printf("Finding the loop\n");
			status = find_loop(&head, &find);
			if (status == 2)
			{
				printf("List empty\n");
			}
			else if (status == 5)
			{
				printf("Loop found\n");
			}
			else if (status == 5)
			{
				printf("Loop not found\n");
			}
			else
			{
				printf("Loop creation not possible\n");
			}
			
			break;
		case 4:
			printf("Printing slist\n");
			print_slist(head, find);
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