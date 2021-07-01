#ifndef __CLIST_H__
#define __CLIST_H__

#define	TRUE	1
#define	FALSE	0

typedef int Data;

typedef struct __node
{
	Data data;
	struct __node *next;
} Node;

typedef struct __list
{
	Node *tail;
	Node *cur;
	int NumberOfdata;
}CList;


void ListInit(CList *plist);
void LInsert(CList *plist, Data data);
void LInsertFront(CList *plist, Data data);

int LFirst(CList *plist, Data *pdata);
int LNext(CList *plist, Data *pdata);
Data LRemove(CList *plist);
int LCount(CList *plist);



#endif


