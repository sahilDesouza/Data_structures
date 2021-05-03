#include "main.h"

int get_tree_height(tree_t * root)
{
	int lheight, rheight;
	//count nodes while Traversing
	//base condition
	if (root == NULL)
	{
		return 0;
	}
	else
	{
		//inititally continuosly traverse left until you reach the end of the left node
		//then return initial height of that node
		lheight = get_tree_height(root->left);
		//check if right node is present at that current parent node
		rheight = get_tree_height(root->right);
		if (lheight > rheight)
		{
			return (lheight + 1);
		}
		else
		{
			return (rheight + 1);
		}
	}
	
	
	
	
}