#include "main.h"


int main()
{
	int choice, status;
	char option;
	data_t data, g_data, n_data;
	slist * head = NULL, * mid = NULL, * value = NULL;
	do
	{
		printf("1.Insert at last\n2.Reverse List(Iterative method)\n3.Reverse List(Recursive method)\n4.print slist\n");
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
			printf("Reversing list\n");
			status = reverse_iterative(&head);
			if (status == 2)
			{
				printf("List empty\n");
			}
			else
			{
				printf("List Reversed\n");
			}
			break;
		case 3:
			printf("Reversing list\n");
			head = reverse_recursive(head);
			//print_slist(value);
			if (head == NULL)
			{
				printf("Enter a node\n");
			}
			break;
		case 4:
			printf("Printing slist\n");
			print_slist(head);
			
			
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