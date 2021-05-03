#include "main.h"

int reverse_iterative(slist ** head)
{
	if (*head == NULL)
	{
		return LIST_EMPTY;
	}
	//take local reference to traverse through the link
	slist *temp, *nextNode, *result = NULL;
	temp = *head;
	
	//iterate to the last of a list and copy this into result in reverse order
	while(temp)
	{
		//get the next node
		nextNode = temp -> link;
		// move the node onto the result
		temp -> link = result; 
		result = temp;
		//update the temp node for iteration
		temp = nextNode;
	}
	(*head) = result;
	return SUCCESS;	
}
slist * reverse_recursive(slist * head)
{
	slist * rest;
	if (head == NULL)
	{
		return NULL;
	}		
	// list with only one node or head is empty
   	if(head->link == NULL )
	{
		return head;

	} 
	// recursive call on rest.
  	rest = reverse_recursive(head->link);

	// make first; link to the last node in the reversed rest.
   	head->link->link = head; 

	// since first is the new last, make its link NULL.
   	head->link = NULL; 

	// rest now points to the head of the reversed list.
   	return rest; 


}