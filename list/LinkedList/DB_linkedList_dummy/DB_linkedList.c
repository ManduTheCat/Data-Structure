#include "DB_linkedList.h"
#include <stdlib.h>

void ListInit(list *plist)
{
	plist->cur = NULL;
	plist->nomOfNdoe = 0;
	plist->head = (Node*)malloc(sizeof(Node));
	plist->tail = (Node*)malloc(sizeof(Node));
	plist->head->Next = NULL;
	plist->tail->prev = NULL;
}

void ListInsert(list *plist, Data data)
{
	Node *newNode = (Node*)malloc(sizeof(Node));

}