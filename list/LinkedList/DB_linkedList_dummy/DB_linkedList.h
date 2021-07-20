#ifndef __DB_linked_list_dm__
#define __DB_linked_list_dm__

typedef int Data;

typedef struct __node__
{
	Node *Next;
	Node *prev;
	Data data;
}Node;

typedef struct __List
{
	Node *head;
	Node *tail;
	Node *cur;
	int nomOfNdoe;
}list;

void ListInit(list *plit);
void ListInsert(list *plist, Data pdata);
int ListFirst(list *plist, Data *pdata);
int ListNext(list *plist, Data *pdata);
int Listprev(list *plist, Data *pdata);
Data LRemve(list *plist);
int ListCount(list *plist);

#endif