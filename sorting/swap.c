#include "main.h"

void swap(data_t *a, data_t *b) 
{ 
        data_t temp = *a; 
    	*a = *b; 
    	*b = temp; 
} 