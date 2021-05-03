#include "main.h"

int search_node(tree_t ** root, data_t data)
{
	
	//validation to check if root node is null
	if (*root == NULL)
	{
		return FAILURE;
	}
	
	//initialise values
	tree_t * temp = *root;	
	while (temp)
	{
		//data found return success
		if (temp->data == data)
		{
			return SUCCESS;
		}
		//if data not found then traverse either left or right
		//depending on the given data
		//if gven data is smaller than parent node traverse left
		else if (temp->data > data)
		{
			//traversing left side
			//updating temp with only left child address
			temp = temp->left;
		}
		//if gven data is larger than parent node traverse right
		else if (data > temp->data)
		{
			//traversing left side
			//updating temp with only left child address
			temp = temp->right;
		}
		
	}
	//data not found
	return DATA_NOT_FOUND;
}
