#ifndef MAIN_H
#define MAIN_H
#include<stdio.h>
#include<stdlib.h>

typedef int data_t;

typedef struct node
{
	data_t data;
	struct node * link;

}slist;

enum status
{
	FAILURE,
	SUCCESS,
	LIST_EMPTY,
	DATA_NOT_FOUND,
	DATA_PRESENT
};

int insert_at_last(slist **, data_t);
void print_slist(slist *);
int reverse_iterative(slist **);
int remove_duplicates(slist ** );
int delete_element(slist ** , data_t);

int delete_at_first(slist ** );
int inserted_sort(slist ** , data_t);

#endif