#include <stdio.h>
#include "Clist.h"
#include <stdlib.h>

void ListInit(CList *plist)
{
	plist->tail = NULL;
	plist->NumberOfdata = 0;
	plist->cur = NULL;
	plist->before = 0;
}

void LInsert(CList *plist, Data data)
{
	Node *newNode = (Node*)malloc(sizeof(Node));
	newNode->data = data;
	if (plist->tail == NULL)
	{
		plist->tail = newNode;
		newNode->next = newNode;
	}
	else
	{
		newNode->next = plist->tail->next;
		plist->tail->next = newNode;
		plist->tail = newNode;
	}

	(plist->NumberOfdata)++;
}

void LInsertFront(CList *plist, Data data)
{
	Node *newNode = (Node*)malloc(sizeof(Node));
	newNode->data = data;
	if (plist->tail == NULL)
	{
		plist->tail = newNode;
		newNode->next = newNode;
	}
	else
	{
		newNode->next = plist->tail->next;
		plist->tail->next = newNode;
	}
	(plist->NumberOfdata)++;


}

int LFirst(CList *plist, Data *pdata)
{
	if(plist->tail == NULL)
		return FALSE;
	plist->cur = plist->tail->next;
	plist->before = plist->tail;
	*pdata = plist->cur->data;
	// *pdata = plist->tail->data;
	return TRUE;
}

int LNext(CList *plist, Data *pdata)
{
	if(plist->tail == NULL)
		return FALSE;
	plist->before = plist->cur;
	plist->cur = plist->cur->next;
	*pdata =  plist->cur->data;
	return TRUE;
}

Data LRemove(CList*plist)
{
	Node *rpos = plist->cur;

	Data *rdata;
	*rdata = plist->cur->data;
	plist->before->next =  rpos->next;
	plist->cur  = plist->before;

	return  rdata;
//return *rdata 확인 필요
}
