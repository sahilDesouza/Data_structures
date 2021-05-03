#include "main.h"

int main()
{
	//initialize the stack
	stack_t stackArray;
	data_t size, element;
	int option, status, data, flag = 1;	
	
	while (1)
	{
		if (flag)
		{
			printf("Enter size of the stack:");
			scanf("%d", &size);
			create_stack(&stackArray, size);
			flag = 0;
		}
		
		//Prompt to select an option
		printf("1.PUSH\n2.POP\n3.PEEK\n4.PEEP\n5.FREE STACK\n6.EXIT\n");
		printf("Enter the option number:");
		scanf("%d", &option);
		printf("\n");
		switch (option)
		{
		case 1:
			//Prompt + read the value
			printf("Enter the data: ");
			scanf("%d", &data);
			//Calling the push function
			status = push(&stackArray, data);
			//Displaying result based on the return status from the function
			if (status == SUCCESS)
                	{
				printf("Data has been pushed\n\n");
                	}
                	else
                	{
                     		printf("Stack is full\n\n");
                	}
                	break;

			
		case 2:
			//Calling the insert at last function
			status = pop(&stackArray, &element);
			//Displaying result based on the return status from the function
			if (status == SUCCESS)
			{
				printf("Data %d has been popped\n\n", element);
			}
			else
			{
				printf("Stack empty\n\n");
			}
			break;
		
		case 3:
			//Calling the delete first function
			status = peek(&stackArray, &element);
			if (status == SUCCESS)
			{
				printf("The top element: %d\n\n", element);
			}
			else
			{
				printf("Stack Empty\n\n");
			}
			break;
		
		case 4:
			//Calling the delete last function
			printf("Printin stack elements\n");
			peep(&stackArray);
			putchar('\n');	
			break;
		case 5:
			//Calling the delete last function
			printf("Freeing stack\n");
			free_stack(&stackArray);
			flag = 1;
			putchar('\n');
			printf("Stack cleared\n\n");	
			break;
			
		case 6:
			return 0;

		default:
			printf("Select a valid option\n");
		}
	}
}