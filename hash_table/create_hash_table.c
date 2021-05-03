#include "main.h"

void create_hash_table(hash_t * arr)
{
	//intitialising entire hash map to default values
	for (int i = 0; i < SIZE; i++)
	{
		//key represents the index
		arr[i].key = i;
		//value represents the data at that key position
		//default value is set tho -1 to indicate that no data is present
		arr[i].value = -1;
		//link is provided soo that multiple data can be added to that key position
		arr[i].link = NULL;
	}
	
}