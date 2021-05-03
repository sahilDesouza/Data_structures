#ifndef MAIN_H
#define MAIN_H
#include<stdio.h>
#include<stdlib.h>

typedef int data_t;

typedef struct node
{
	data_t data;
	struct node * left;
	struct node * right;

}tree_t;

enum status
{
	FAILURE,
	SUCCESS,
	DATA_NOT_FOUND,
	DUPLICATE_FOUND
};
int bst_insert(tree_t **, data_t);
int find_min(tree_t **);
int find_max(tree_t **);
int search_node(tree_t **, data_t);
void inorder(tree_t *);
int get_total_node(tree_t *);
int get_tree_height(tree_t * );
tree_t * delete_BST(tree_t * root, data_t data);
tree_t * min_value_node(tree_t * root);


#endif