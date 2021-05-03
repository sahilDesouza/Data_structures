#include "main.h"

int find_min(tree_t ** root)
{
	//validation to check if root is null
	if (*root == NULL)
	{
		return FAILURE;
	}
	//if we continuosly traverse the left side well get the min node value
	tree_t * temp = *root;
	//check if the left side of the node contains null or not
	//if its not null the update temp to point to the next node and soo on
	while (temp->left)
	{
		temp = temp->left;
	}
	//once temp contains null value means traversed to the last node
	//soo return that data
	return temp->data;
}

int find_max(tree_t ** root)
{
	//validation to check if root is null
	if (*root == NULL)
	{
		return FAILURE;
	}
	//if we continuosly traverse the right side well get the max node value
	tree_t * temp = *root;
	//check if the right side of the node contains null or not
	//if its not null the update temp to point to the next node
	while (temp->right)
	{
		temp = temp->right;
	}
	//once temp contains null value means traversed to the last node
	//soo return that data
	return temp->data;
}