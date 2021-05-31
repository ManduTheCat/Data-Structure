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

int LFirst(List *plist, Ldata *pdata)
{
	if(plist->head->next == NULL)
	{
		return 0;
	}
		plist->cur = plist->head->next;
		plist->before = plist->head;
		*pdata = plist->cur->data;
		return 1;
}

int LNext(List *plist, Ldata *pdata)
{
	if(plist->head->next ==NULL)
		return 0;

	plist->before = plist->cur;
	plist->cur = plist->cur->next;
	*pdata = plist->cur->data;
	return 1;
}

Ldata LRemove(List *plist)
{
	Node *rp;
	Ldata rdata;

	rp = plist->cur;
	rdata = plist->cur->data;
	plist->before->next = plist->cur->next;
	plist->cur = plist->before;
	free(rp);
	(plist->numOfdata)--;
	return rdata;
}

int LCount(List *plist)
{
	return (plist->numOfdata);
}
