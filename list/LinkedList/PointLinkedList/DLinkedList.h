#ifndef __D_LINKED_LIST_H__
#define __D_LINKED_LIST_H__
#include "Point.h"


typedef Point *Ldata;

typedef struct __node
{
	Ldata	data;
	struct __node *next;
}Node;

typedef struct _LinkedList
{
	Node	*head;
	Node	*cur;
	Node	*before;
	int 	numOfdata;
	int		(*comp)(Ldata d1, Ldata d2);
} LinkedList;

typedef LinkedList List;

void ListInit(List *plist);
void FInsert(List *plist, Ldata data);
void LInsert(List *plist, Ldata data);

int LFirst(List *plist, Ldata *pdata);
int LNext(List *plist, Ldata *pdata);

Ldata LRemove(List *plist);
int LCount(List *plist);

void SetSortRule(List *list, int(*comp)(Ldata d1, Ldata d2));


#endif
