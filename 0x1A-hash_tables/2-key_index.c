#include"hash_tables.h"
/**
*key_index- function that gives the index of a key
*@key:Key
*@size:the size of the array of the hash table
*Return:The index of a the key
**/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	hash = hash_djb2(key);
	hash = hash % size;
	return (hash);
}
