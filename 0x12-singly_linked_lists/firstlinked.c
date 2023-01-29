#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
}node;
int main()
{
	node head;
	node *head = NULL;
	head = malloc(sizeof(node));
	head->data = 45;
	head->link = NULL;
	printf("%d",head->data);
	return 0;
}
