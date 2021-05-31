#include "DLinkedList.h"
#include <stdio.h>
#include <stdlib.h>

List list;
Ldata data;

void ListInit(List *plist)
{
	plist->head = (Node*)malloc(sizeof(Node));
	plist->head->next = NULL;
	plist->numOfdata = 0;
	plist->comp = NULL;
	plist->before = NULL;
	plist->cur = NULL;
}

void LInsert(List *plist, Ldata data)
{
	Node *newNode = (Node*)malloc(sizeof(Node));
	newNode->data = data;
	newNode->next = plist->head->next;
	plist->head->next = newNode;
	(plist->numOfdata)++;
}
