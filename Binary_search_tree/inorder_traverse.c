#include "main.h"

void inorder(tree_t * root)
{
	//print data while inorder Traversing
	if (root)
	{
		//move to the left of the subtree
		inorder(root->left);
		//print data element at root position
		printf("%d ", root->data);
		//move to the left of the subtree
		inorder(root->right);
	}

}