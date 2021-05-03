#include "main.h"

int main()
{
	//Declare the variables
	
	data_t data;
	tree_t *root = NULL, * value = NULL;
	data_t status;
	int option;
	
	while(1)
	{
		
		//Prompt to select an option
		printf("1.Insert BST\n2.Search node\n3.find min\n4.find max node\n5.print node\n6.Find total number of nodes\n7.get Tree height\n8.Delete Node\n9.Exit\n");
		printf("Enter your choice:");
		scanf("%d", &option);
		printf("\n");
		switch (option)
		{
			case 1:
				
				//Calling the enque function
				printf("Inserting node in the bst\n");
				printf("Enter the value:");
				scanf("%d", &data);
				status = bst_insert(&root, data);
				if (status == 1)
				{
					printf("Node added to the tree\n\n");
				}
				else if (status == 0)
				{
					printf("Node not added\n\n");
				}
				else
				{
					printf("Duplicate Found\n\n");
				}
				break;
			case 2:
				
				//Calling the search_node function
				printf("Searching node in the bst\n");
				printf("Enter the value to be found:");
				scanf("%d", &data);
				status = search_node(&root, data);
				if (status == 1)
				{
					printf("Data found\n\n");
				}
				else if (status == 0)
				{
					printf("No node present\n\n");
				}
				else
				{
					printf("Data not Found\n\n");
				}
				break;
			case 3:
				
				//Calling the find_min function
				printf("Searching min node in the bst\n");
				status = find_min(&root);
				if (status == 0)
				{
					printf("No node present\n\n");
				}
				else
				{
					printf("Min node is %d\n\n", status);
				}
				break;
			case 4:
				
				//Calling the find_max function
				printf("Searching max node in the bst\n");
				status = find_max(&root);
				if (status == 0)
				{
					printf("No node present\n\n");
				}
				else
				{
					printf("Max node is %d\n\n", status);
				}
				break;
			
			case 5:
				//Calling the inorder function
				printf("printing nodes in the bst\n");
				inorder(root);
				printf("\n\n");
				break;
			case 6:
				//Calling the get_total_node function
				printf("Finding total number of nodes\n");
				status = get_total_node(root);
				printf("Total number of nodes is %d\n\n", status);
				break;
			case 7:
				printf("Finding tree height\n");
				status = get_tree_height(root);
				printf("Tree height is %d\n\n", status - 1);
				break;
			case 8:
				//Calling the delete_BST function
				printf("Deleting nodes in the bst\n");
				printf("Enter the value to be Deleted:");
				scanf("%d", &data);
				value = delete_BST(root, data);
				printf("node %d is deleted from the tree and parent node is %d\n\n",data ,value->data);
				break;
			case 9:
				//Exiting the loop
				return 0;

			default:
				printf("Select a valid option\n");
		}
	}
}
