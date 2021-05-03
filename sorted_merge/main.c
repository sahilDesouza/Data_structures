#include "main.h"


int main()
{
	int choice, status;
	char option;
	int alistNum, blistNum;
	data_t data, g_data, n_data;
	slist * ahead = NULL, * bhead  = NULL, *head = NULL;
	do
	{
		printf("1.Insert at last\n2.sort both LL\n3.Merge both LL\n4.print slist\n");
		
		printf("Enter your choice:");
		scanf("%d", &choice);
		getchar();
		printf("\n");

		switch (choice)
		{
		case 1:
			printf("Insert at last\n");

			ahead = NULL;
			printf("Enter the number of items in list 1: ");
			scanf("%d", &alistNum);
			for (int i = 0; i < alistNum; i++)
			{
				printf("Enter the data for the 1st LL: ");
				scanf("%d", &data);
				status = insert_at_last(&ahead, data);
				if (status == 1)
				{
					printf("Data of 1st LL Inserted at last\n");
				}
				else
				{
					printf("Data not inserted of 1st LL\n");
				}
			}
			
			bhead = NULL;
			printf("Enter the number of items in list 2: ");
			scanf("%d", &blistNum);
			for (int j = 0; j < blistNum; j++)
			{
				printf("Enter the data for the 2nd LL: ");
				scanf("%d", &data);
				status = insert_at_last(&bhead, data);
				if (status == 1)
				{
					printf("Data of 2nd LL Inserted at last\n");
				}
				else
				{
					printf("Data not inserted of 1st LL\n");
				}
				
			}
			break;
		case 2:
			printf("Sorting 1st List\n");
			status = sort_list(&ahead);
			if (status == 2)
			{
				printf("List empty\n\n");
				
			}
			else
			{
				printf("List sorted\n\n");
			}
			printf("Sorting 2nd List\n");
			status = sort_list(&bhead);
			if (status == 2)
			{
				printf("List empty\n\n");
				
			}
			else
			{
				printf("List sorted\n\n");
			}
			break;
		case 3:
			ahead = NULL; 
			 
			printf("Enter the number of elements in list a: ");
			scanf("%d", &alistNum);
			printf("Enter the elements:\n");
			for(int i = 0; i < alistNum;i++)
			{
				printf("%d: ", i);
				scanf("%d", &data);
				insert_at_last(&ahead, data);
				//(result == SUCCESS)? printf("insert in alist SUCCESS\n"): printf("insert in alist FAILURE\n") ;
			}
	
			bhead = NULL;
			printf("Enter the number of elements in list b: ");
			scanf("%d", &blistNum);
			printf("Enter the elements:\n");
			for(int i = 0; i < blistNum;i++)
			{
				printf("%d: ", i);
				scanf("%d", &data);
				insert_at_last(&bhead, data);
				//(result == SUCCESS)? printf("insert in blist SUCCESS\n"): printf("insert in blist FAILURE\n") ;
			}

			head = merge_sortedlinks(&ahead, &bhead);
			break;
		
		case 4:
			printf("Printing slist\n");
			printf("Printing 1st Linked List\n\n");
			print_slist(ahead);
			printf("Printing 2nd Linked List\n\n");
			print_slist(bhead);
			printf("Printing final Linked List\n\n");
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