#include "main.h"

void print_hash_table(hash_t * arr)
{
	hash_t * temp = NULL;
	//iterating through the entire hash map
	for (int i = 0; i < SIZE; i++)
	{
		//if link is null the print value of key only
		if (arr[i].link == NULL)
		{
			printf("arr[%d]:%d\n", i, arr[i].value);
		}
		//if link is not null the print all the values of the nodes present
		else
		{
			printf("arr[%d]:%d->", i, arr[i].value);
			temp = arr[i].link;
			//updating temp each time and printing value of that node
			while (temp)
			{
				printf("%d->", temp->value);
				temp = temp->link;
			}
			printf("\n");	
		}
			
	}
	
}