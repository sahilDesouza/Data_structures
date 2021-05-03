#include "main.h"
int infixToPostfix(char * , stack_t *);
int evaluatePostfix(char * , stack_t *);
int main()
{
	char option;
	do
	{
		//initialize the stack
		stack_t stack;
		data_t size, element;
		int status, data;
		
		char str[100];
		
		printf("Add '$' and the end of the expression\n");
		printf("Enter the expression with the proper operands and operators:");
		scanf("%s", str);

		size = strlen(str);
		create_stack(&stack, size);

		//char exp[] = "2*3-3+8/4/(1+1)$"; 
    		infixToPostfix(str, &stack); 	
		status = evaluatePostfix(str, &stack);
		printf("The Evaluated postfix value is: %d\n", status);

		
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
	} while (option);
	return 0;
}
// Function to check if the given character is operand 
int isOperand(char ch) 
{ 
    	return (ch >= '0' && ch <= '9'); 
} 
// A utility function to return precedence of a given operator 
// Higher returned value means higher precedence 
int Prec(char ch) 
{ 
    	switch (ch) 
    	{ 
    		case '+': 
    		case '-': 
        		return 1; 
  
    		case '*': 
    		case '/': 
        		return 2; 
  
    		case '^': 
        		return 3; 
    	} 
    	return -1; 
} 

// The main function that converts given infix expression 
// to postfix expression.  
int infixToPostfix(char* str, stack_t * stack) 
{ 
	int i, k; 
  
    	for (i = 0, k = -1; str[i]; ++i) 
    	{ 
        	// If the scanned character is an operand, add it to output. 
       	 	if (isOperand(str[i])) 
            	{
			str[++k] = str[i]; 
		}
        	// If the scanned character is an ‘(‘, push it to the stack. 
       		else if (str[i] == '(') 
		{
			push(stack, str[i]); 
		}
            		
        	// If the scanned character is an ‘)’, pop and output from the stack  
        	// until an ‘(‘ is encountered. 
        	else if (str[i] == ')') 
        	{ 
            		while (!isEmpty(stack) && peek(stack) != '(')
			{
				str[++k] = pop(stack); 
			} 
                	if (!isEmpty(stack) && peek(stack) != '(') 
                	{
				return -1;  
			}
          		else
			{
				pop(stack); 
			}
                		
        	}
		// an operator is encountered  
        	else 
        	{ 
            		while (!isEmpty(stack) && Prec(str[i]) <= Prec(peek(stack)))
			{
				str[++k] = pop(stack); 
			} 
                	push(stack, str[i]); 
        	} 
  
    	} 
    	// pop all the operators from the stack 
    	while (!isEmpty(stack))
	{
		str[++k] = pop(stack); 
	} 
        str[++k] = '\0'; 
    	printf("printing Postfix:%s\n", str); 
}

int evaluatePostfix(char * str, stack_t * stack) 
{ 
    	int i; 
  
    	// Scan all characters one by one 
    	for (i = 0; str[i]; ++i) 
    	{ 
        	// If the scanned character is an operand (number here), 
        	// push it to the stack. 
        	if (isOperand(str[i]))
		{
			push(stack, str[i] - '0'); 
		}
        	// If the scanned character is an operator, pop two 
        	// elements from stack apply the operator 
        	else
        	{ 
            		int val1 = pop(stack); 
            		int val2 = pop(stack); 
            		switch (str[i]) 
            		{ 
            			case '+': 
				    	push(stack, val2 + val1); 
				    	break; 
            			case '-': 
				    	push(stack, val2 - val1); 
					break; 
            			case '*': 
				    	push(stack, val2 * val1);
					break; 
            			case '/': 
				    	push(stack, val2/val1);
					break; 
            		} 
        	} 
    	} 
    	return pop(stack); 
} 
  