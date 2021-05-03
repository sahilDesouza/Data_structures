#ifndef MAIN_H
#define MAIN_H

#include<stdio.h>
#include<stdlib.h>

typedef int data_t;
#define SIZE 5


enum status
{
	FAILURE,
	SUCCESS,
};

int bubble_sort(data_t *, data_t);
int insertion_sort(data_t *, data_t);
int selection_sort(data_t *, data_t);
void populate(data_t * , data_t);
void swap(data_t *, data_t *) ;
#endif