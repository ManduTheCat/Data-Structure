#include "DB_linkedList.h"
#include <stdlib.h>

void ListInit(list *plist)
{
	plist->cur = NULL;
	plist->nomOfNdoe = 0;
	plist->head = (Node*)malloc(sizeof(Node));
	plist->tail = (Node*)malloc(sizeof(Node));
	plist->head->Next = plist->tail;
	plist->head->prev = NULL;
	plist->tail->prev = plist->head;
	plist->tail->Next = NULL;
}

void ListInsert(list *plist, Data pdata)
{
	Node *newNode = (Node*)malloc(sizeof(Node));
	newNode->data = pdata;
	newNode->prev = plist->tail->prev;
	plist->tail->prev->Next = newNode;
	newNode->Next = plist->tail;
}

