#ifndef TEST
#define TEST

#include <stdlib.h>
#include <stdio.h>
#include "list.h"

#endif

struct NODE *head;
	
void newList(void)
{
	head = NULL;
}

int addNode(int value)
{
	struct NODE* newNode = malloc(sizeof(struct NODE));
	if(newNode == NULL) return 0;
	newNode->data = value;
	newNode->next = head;
	head = newNode;
	return 1;
}

void prettyPrint(void)
{
	int size = 0;
	struct NODE* temp = head;	
	while(temp->next != NULL)
	{
		size = size + 1;
		temp = temp->next;
	}

	temp = head;
	for(int k = 0;k<=size;k++)
	{
		printf("%d\n",temp->data);
		temp = temp->next;
	}
}
