#include "main.h"

int sort_list(slist ** head)
{
	//check if list is empty or not
	if (head == NULL)
	{
		return LIST_EMPTY;
	}

	slist * temp = *head;
	data_t count = 0;
	//finding total number of elements
    	while(temp)
    	{

        	temp = temp->link;
		count++;
        }
	//printf("%d\n", count);
	if (count == 1)
	{
		return SUCCESS;
	}
	
	temp = *head;
	int value;
	//using bubble sort algorithm
    	for (int i = 0; i < count; i++)
    	{
        	for (int j = 0; j < count - i - 1; j++)
        	{
            		if (temp->data > temp->link->data)
            		{
				value = temp->link->data;
				temp->link->data = temp->data;
				temp->data = value;
            		}
			temp = temp->link;
           	}
		temp = *head;
        }
	return SUCCESS;
}

