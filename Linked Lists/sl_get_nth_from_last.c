#include "main.h"

int get_nth_from_last(slist ** head, data_t n, slist ** value)
{

	if (*head == NULL)
	{
		return LIST_EMPTY;
	}
	data_t i = 1;
	slist * first = *head, * next = *head;
	first = first->link;
	//condition to check if more than 1 node is present
	if (first == NULL)
	{
		return FAILURE;
	}
	//first is n-1 times ahead of next
	while (i <= n - 1)
	{
		first = first->link;
		if (first == NULL)
		{
			return FAILURE;
		}
		i++;
	}
	//continuously iterate untill first equals null
	while (first->link != NULL)
	{
		first = first->link;
		next = next->link;
	}
	//updates the value with the nth value
	*value = next;
	return SUCCESS;
	
	


}
