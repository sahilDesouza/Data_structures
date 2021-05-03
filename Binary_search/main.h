#ifndef MAIN_H
#define MAIN_H

#include<stdio.h>
#include<stdlib.h>
#define SIZE 5;

typedef int data_t;
typedef struct node 
{
	data_t data;
	struct node *link;

}slist;

enum status
{
	FAILURE,
	SUCCESS,
	KEY_FOUND,
	KEY_NOT_FOUND
};

void i_sort(data_t *, data_t lim);
int i_binary_search(data_t *, data_t , data_t, data_t * );
//int print_queue(slist *front);
void populate(data_t * , data_t );
int R_binary_search(data_t *, data_t, data_t, data_t, data_t * );
#endif