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
	DATA_PRESENT,
	LOOP_FOUND,
	LOOP_NOT_FOUND
};
int insert_at_first(slist **, data_t);
int insert_at_last(slist **, data_t);
void print_slist(slist *, slist *);
int insert_after(slist ** , int , int );
int insert_before(slist ** , int , int );
int find_node(slist ** , int );
int delete_at_last(slist **);
int delete_at_first(slist **);
int delete_list(slist **);
int delete_element(slist ** , data_t);
int insert_nth(slist **, data_t, data_t);
int find_mid(slist ** , slist ** );
int get_nth_from_last(slist **, data_t n, slist **);
int sort_list(slist **);
int inserted_sort(slist ** , data_t);

int create_loop(slist **, data_t, slist **);
int find_loop(slist **, slist **);

#endif