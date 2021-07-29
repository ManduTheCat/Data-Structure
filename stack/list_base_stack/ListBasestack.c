#include "ListBasestack.h"
#include <stdlib.h>

void stackInit(ListStack *pstack)
{
	pstack->Head = NULL;
	pstack->NumOfData = 0;
	pstack->cur = NULL;
}

int stackIsEmty(ListStack *pstack)
{
	if(pstack->NumOfData == 0)
		return FALSE;
	else 
		return TRUE;
}

Data stackPop(ListStack *pstack)
{

}

Data stackPeck(ListStack *pstack)
{

}

Data stackInsert(ListStack *pstack, Data pdata)
{
	node *newNode = (node*)malloc(sizeof(node));
	pstack->Head = newNode;
}