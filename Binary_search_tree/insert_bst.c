#include "main.h"

int bst_insert(tree_t ** root, data_t data)
{
	tree_t * new = malloc(sizeof(tree_t));
	//validation
	if (new == NULL)
	{
		return FAILURE;
	}
	//initialise node values
	new->data = data;
	new->left = NULL;
	new->right = NULL;

	//validation to check if root node is null
	if (*root == NULL)
	{
		//if root node is null then update it with new node address
		*root = new;
		return SUCCESS;
	}
	data_t flag;
	//initialise values
	//temp and parent point to the first node/ root node
	tree_t * temp = *root, * parent;	
	while (temp)
	{
		//store address of temp node in the parent node
		//once temp becomes null, parent will contain the previous node address
		parent = temp;
		if (temp->data > data)
		{
			//traversing left side
			//updating temp with only left child address
			temp = temp->left;
			//setting flag to update left child of the parent node  
			flag = 1;
		}
		else if (data > temp->data)
		{

			//traversing left side
			//updating temp with only left child address
			temp = temp->right;
			flag = 0;
		}
		else
		{
			return DUPLICATE_FOUND;
		}
		
	}
	if (flag)
	{
		//updating address of the left child parent node with the address of the new node
		parent->left = new;
	}
	else
	{
		//updating address of the right child parent node with the address of the new node
		parent->right = new;
	}
	return SUCCESS;
}