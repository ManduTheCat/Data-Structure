#include "ListBasestack.h"
#include <stdlib.h>
#include <stdio.h>

void stackInit(ListStack *pstack)
{
	pstack->Head = NULL;
	pstack->NumOfData = 0;
}

int stackIsEmty(ListStack *pstack)
{
	if(pstack->Head == NULL)
		return FALSE;
	else
		return TRUE;
}

Data stackPop(ListStack *pstack)
{
	Data temp;
	node *tempNode;

	if(stackIsEmty(pstack) == FALSE)
	{
		printf("error by empty");
		exit(-1);
	}

	temp = pstack->Head->data;
	tempNode = pstack->Head;
	pstack->Head = pstack->Head->Next;
	free(tempNode);

	return temp;

}

Data stackPeck(ListStack *pstack)
{
	Data temp;

	if(stackIsEmty(pstack) == FALSE)
	{
		printf("error by empty");
		exit(-1);
	}

	temp = pstack->Head->data;

	return temp;
}

void stackInsert(ListStack *pstack, Data pdata)
{
	node *newNode = (node*)malloc(sizeof(node));

	newNode->data = pdata;
	newNode->Next = pstack->Head;
	pstack->Head = newNode;

}
