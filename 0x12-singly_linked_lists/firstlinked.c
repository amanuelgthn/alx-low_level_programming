#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
};
int main()
{
	struct node *head = NULL;
	head = malloc(sizeof(struct node));
	head->data = 45;
	head->link = NULL;
	printf("%d\n",head->data);
	printf("%d\n",*head);
	printf("%d\n",head->link);
	return 0;
}
