#ifndef __LIST_BASE_STACK__
#define __LIST_BASE_STACK__

#define TRUE 1
#define FALSE 0

typedef int Data;

typedef struct _Node
{
	struct _Node *Next;
	Data data;
}node;

typedef struct _list
{
	node *Head;
	int NumOfData;
}ListStack;


void stackInit(ListStack *pstack);
int stackIsEmty(ListStack *pstack);

Data stackPop(ListStack *pstack);
Data stackPeck(ListStack *pstack);
void stackInsert(ListStack *pstack, Data pdata);

#endif
