#include"hash_tables.h"
/**
*shash_table_t-function to create a sorted hash table
*@size:size of the hash table to be created
*Return:the newly created table
**/
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *table;
	shash_node_t **array;
	shash_node_t *shead;
	shash_node_t *stail;
	
	if (size == 0)
		return (NULL);
	table = malloc(sizeof(shash_table_t));
	if (table == NULL)
		return (NULL);
	array = malloc(sizeof(char *) * size);
	if (array == NULL)
		return (NULL);
	shead = malloc(sizeof(shash_node_t));
	if (shead == NULL)
		return (NULL);
	stail = malloc(sizeof(shash_node_t));
	if (stail == NULL)
		return (NULL);
	table->size = size;
	table->array = array;
	table->shead = shead;
	table->stail = stail;
	return(table);
}
/**
*create_snode-create a sorted hash node of the new element
*@key:key
*@value:value of key
*Return: return pointer to the created node
**/
shash_node_t *create_snode(const char *key, const char *value)
{
	shash_node_t *node = malloc(sizeof(shash_node_t));
	
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
	node->key = strdup(key);
	node->value = strdup(value);
	node->next = NULL;
	node->sprev = NULL;
	node->snext = NULL;
	return (node);
}
/**
*shash_table_set-function that adds an element to the sorted hash table
*@ht-sorted hash table
*@key:key cannot be an empty string
*@value:value of key must be duplicated
*Return:1 if it succeeded or 0 if otherwise
**/
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	
	unsigned long int ind;
	hash_node_t *new = create_node(key, value), *current = NULL;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);
	if (new == NULL)
	{
		free(new);
		return (0);
	}
	new = create_node(key, value);
	ind = key_index((unsigned char *)key, ht->size);
	if(ht->shead == NULL && ht->stail == NULL)
	{
		new->snext = ht->shead;
		new->sprev = ht->stail;
	}
	else
	{
		if(strcmp(new->key, ht->shead->key) <= 0)
		{
			ht->shead->sprev = new;
			new = ht->shead;
		}
		else
		{
			ht->stail->snext = new;
			new = ht->stail;
		}
	}
	if (ht->array[ind] == NULL)
	{
		ht->array[ind] = new;
		return (1);
	}
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
	new->next = ht->array[ind];
	ht->array[ind] = new;
	return (1);
/*char *shash_table_get(const shash_table_t *ht, const char *key)
void shash_table_print(const shash_table_t *ht)
void shash_table_print_rev(const shash_table_t *ht)
void shash_table_delete(shash_table_t *ht)*/
