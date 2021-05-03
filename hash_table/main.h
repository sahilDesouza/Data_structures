#ifndef MAIN_H
#define MAIN_H
#include<stdio.h>
#include<stdlib.h>
#define SIZE 5

typedef int data_t;

typedef struct node
{
	int key;
	int value;
	struct node * link;

}hash_t;

enum status
{
	FAILURE,
	SUCCESS,
	DATA_NOT_FOUND,
	DATA_FOUND
};
void create_hash_table(hash_t *);
int insert_hash_table(hash_t *, data_t);
int search_hash_table(hash_t *, data_t);
int delete_hash_table(hash_t *);
void print_hash_table(hash_t *);
int delete_element(hash_t *, data_t);

#endif