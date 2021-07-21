#include "DB_linkedList.h"
#include <stdlib.h>

void ListInit(list *plist)
{
	plist->nomOfNdoe = 0;
	plist->cur = NULL;
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
	plist->tail->prev =newNode;

	(plist->nomOfNdoe)++;

}

int ListFirst(list *plist, Data *pdata)
{
	if(plist->head->Next == plist->tail)
		return 0;

	plist->cur = plist->head->Next;
	*pdata = plist->cur->data;
	return 1;
}

int ListNext(list *plist, Data *pdata)
{
	if(plist->cur->Next == plist->tail)
		return 0;

	plist->cur = plist->cur->Next;
	*pdata = plist->cur->data;
	return 1;
}

int Listprev(list *plist, Data *pdata)
{
	if(plist->cur->prev == plist->head)
		return 0;

	plist->cur = plist->cur->prev;
	*pdata = plist->cur->data;
	return 1;
}

Data LRemve(list *plist)
{
	Node *rpos = plist->cur;
	Data remv  = rpos->data;

	plist->cur->prev->Next = plist->cur->Next;
	plist->cur->Next->prev = plist->cur->prev;

	plist->cur = plist->cur->prev;

	free(rpos);
	(plist->nomOfNdoe)--;
	return remv;
}

int ListCount(list *plist)
{
	return (plist->nomOfNdoe);
}
