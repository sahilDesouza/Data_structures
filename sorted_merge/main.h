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
int sort_list(slist **);
int merge_sort(slist **, slist **);
int insert_after(slist ** , int , int );
slist * merge_sortedlinks(slist **ahead, slist **bhead);
void MoveNode(slist ** destRef, slist ** sourceRef);
#endif