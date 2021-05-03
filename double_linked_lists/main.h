#ifndef MAIN_H
#define MAIN_H
#include<stdio.h>
#include<stdlib.h>

typedef int data_t;

typedef struct node
{
	data_t data;
	struct node * next;
	struct node * prev;

}dlist;

enum status
{
	FAILURE,
	SUCCESS,
	LIST_EMPTY,
	DATA_NOT_FOUND
};
int insert_at_first(dlist **, dlist ** ,data_t);

int insert_at_last(dlist **, dlist **, data_t);

void print_dlist(dlist *);

int insert_after(dlist **, dlist ** , int , int );

int insert_before(dlist **, dlist ** ,int , int );

int delete_element(dlist **, dlist **, data_t );

int delete_at_last(dlist **, dlist **);

int delete_at_first(dlist **, dlist **);

int delete_list(dlist **, dlist **);

#endif