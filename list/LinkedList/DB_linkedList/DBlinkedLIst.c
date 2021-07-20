#include <stdlib.h>
#include "DBLinkedList.h"

 void ListInit(List *plist)
 {
	plist->head = NULL;
	// plist->cur =NULL;
	plist->numOfData = 0;
 }

 void ListInsert(List *plist, Data pdata)
 {
	Node *newNode = (Node*)malloc(sizeof(Node));
	newNode->data = pdata;
	newNode->next = plist->head;
	if(plist->head != NULL)
	{
		plist->head->prev = newNode; //간지부분 
	}
	plist->head = newNode;
	newNode->prev = NULL;
	(plist->numOfData)++;
 }

 int ListFirst(List *plist, Data *pdata)
 {
	if(plist->head == NULL)
	{
		return FALE;
	}
	plist->cur = plist->head;
	*pdata = plist->cur->data;
	return TRUE;
 }

 int ListNext(List *plist, Data *pdata)
 {
	if(plist->cur->next == NULL)
	{
		return FALE;
	} 
	plist->cur = plist->cur->next;
	*pdata = plist->cur->data;
	return TRUE;
 }

 int LPrevious(List *plist, Data *pdata)
 {
	 if(plist->cur->prev == NULL)
	 {
		 return FALE;
	 }
	plist->cur = plist->cur->prev;
	*pdata = plist->cur->data;
	return TRUE;
 }

 int LCount(List *plist)
 {
	return (plist->numOfData);
 }