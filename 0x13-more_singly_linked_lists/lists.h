#ifndef _LISTS_
#define _LISTS_
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 *
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;
size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int k);
listint_t *add_nodeint_end(listint_t **head, const int n);
#endif /* _LISTS_ */
