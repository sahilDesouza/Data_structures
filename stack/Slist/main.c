#include "main.h"

int main()
{
	//initialize the stack
	stack_t * stackArray = NULL;
	data_t data, element;
	int option, status;
		
	while (1)
	{
		//Prompt to select an option
		printf("1.PUSH\n2.POP\n3.PEEK\n4.PEEP\n5.EXIT\n");
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
			status = peek(stackArray, &element);
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
			status = peep(stackArray);
			if (status == 3)
			{
				printf("Stack is Empty\n");
			}
			
			putchar('\n');	
			break;
		
		case 5:
			return 0;

		default:
			printf("Select a valid option\n");
		}
	}
}