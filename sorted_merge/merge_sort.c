#include "main.h"
/*
int merge_sort(slist ** ahead, slist ** bhead)
{

	if (*ahead == NULL || *bhead == NULL)
	{
		return LIST_EMPTY;
	}
	slist * atemp = *ahead;
	slist * btemp = *bhead;
	while (atemp)
	{
		if ((btemp->data >= atemp->data) && (btemp->data <= atemp->link->data))
		{
			printf("%d\n", atemp->data);
			printf("%d\n", btemp->data);
			insert_after(ahead, atemp->data, btemp->data);
			btemp = btemp->link;
			
		}
		if (btemp == NULL)
		{
			return SUCCESS;
		}
		atemp = atemp->link;
	}
	return SUCCESS;
}
*/

// removes the front node from the second list and pushes it onto the front of the first. 
void MoveNode(slist ** destRef, slist ** sourceRef) 
{
	slist * newNode = *sourceRef; // the front source node local reference
	if (newNode != NULL)
	{	
		*sourceRef = newNode->link; // Advance the source pointer
		newNode->link = *destRef; // Link the old dest off the new node
		*destRef = newNode; // Move dest to point to the new node
	}	
}


slist * merge_sortedlinks(slist ** ahead, slist ** bhead)
{
	//local copy to get mergedlink
	slist *result = NULL;
	

	//take a reference pointer to the last result pointer
	slist ** last = &result;

	while (1) 
	{
		//if only alist is empty return empty list
		if ((*ahead == NULL) && (*bhead == NULL))
		{
			return NULL;
		}
		//if only alist is empty, update the list with b list data
		if (*ahead == NULL) 
		{
			*last = *bhead;
			break;
		}
		//if only blist is empty, update the list with a list data
		else if (*bhead == NULL)
		{
			*last = *ahead;
			break;
		}
		//if alist element is less than b list element, add 1st element of a list into result pointed by last
		if (((*ahead)->data) <= ((*bhead)->data))
		{
			MoveNode(last, ahead);
		}
		else
		{
			//else add 1st element of b list into result pointed by last
			MoveNode(last, bhead);
		}
		
		last = &((*last) -> link); // advance to point to
		
	}
	return (result);
}

