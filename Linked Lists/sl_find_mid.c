#include "main.h"

int find_mid(slist ** head, slist ** mid)
{
	//checks if list is empty or not
	if (*head == NULL)
	{
		return LIST_EMPTY;
	}
	//slist * temp = *head;

	slist * p1 = *head, * p2 = *head;
	data_t value;

	//loop condition for 3 elements
	if (p2->link->link->link == NULL)
	{
		*mid = p1->link;
		return SUCCESS;
	}
	//p2 is a fast pointer and is 2 steps ahead
	//p1 is slow pointer and 1 step behind
	if (p2->link != NULL)
	{
		p2 = p2->link->link;
		p1 = p1->link;
		//iterates untill p2 reaches null
		while (p2 != NULL && p2->link != NULL)
		{
			//p2 = p2->link;
			p2 = p2->link->link;
			p1 = p1->link;
		}
		//p1 = p1->link;
		*mid = p1;
		return SUCCESS;
		
	}
	//update mid value
	*mid = p1;
	return SUCCESS;

}