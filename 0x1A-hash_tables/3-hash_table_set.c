#include"hash_tables.h"
/**
*hash_table_set-function that adds an element to the hash table
*@ht:hash table
*@key:key the key cannot be an empty string
*@value:value of key, value must be duplicated and can be an empty string
*Return:1 if it succeeded or 0 otherwise
**/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	usigned long int key_index;
	
	key_index = 
	
