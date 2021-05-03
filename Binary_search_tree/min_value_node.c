#include "main.h"

tree_t * min_value_node(tree_t * root)
{
	
	//if no elements are there in a tree
	if (NULL == root)
	{
		return NULL;
	}

	//if non empty 
	//take local reference to traverse along the tree nodes 
	tree_t *temp;
	temp = root;
	
	//go to left most element
	while(temp -> left != NULL)
	{
		temp = temp -> left;	
	}
	return temp;
	
}