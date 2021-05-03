#include "main.h"

int get_total_node(tree_t * root)
{
	//base condition
	if (root == NULL)
	{
		return 0;
	}
	//traversing left side and right side of the bst 
	//once we reach the base condition, base condition value will be returned
	//then that value will be returned to the previous stack frame
	//thereby count increments each time a node is encountered
	return (get_total_node(root->left) + 1 + get_total_node(root->right));
}