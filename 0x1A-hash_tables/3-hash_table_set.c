#include"hash_tables.h"
/**
*create_node- create hash node of the new element
*@key:key
*@value:value of key
*Return:return pointer to the created node
**/
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *node = malloc(sizeof(hash_node_t));
	
	if (node == NULL)
	{
		return (NULL);
	}
	node->key = malloc(sizeof(strlen(key) + 1));
	if (node->key == NULL)
	{
		return (NULL);
	}
	node->value = malloc(sizeof(strlen(value) + 1));
	if (node->value == NULL)
	{
		return (NULL);
	}
	strcpy(node->key, key);
	strcpy(node->value, value);
	node->next = NULL;
	return (node);
}
/**
*hash_table_set-function that adds an element to the hash table
*@ht:hash table
*@key:key the key cannot be an empty string
*@value:value of key, value must be duplicated and can be an empty string
*Return:1 if it succeeded or 0 otherwise
**/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int ind;
	hash_node_t *new = NULL, *current = NULL;

	ind = key_index((unsigned char *)key, ht->size);
	current = ht->array[ind];
	while (current)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = strdup(value);
			return (1);
		}
		current = current->next;
	}
	new = create_node(key, value);
	if (new == NULL)
	{
		free(new);
		return (0);
	}
	new->next = ht->array[ind];
	ht->array[ind] = new;
	return (1);
}
