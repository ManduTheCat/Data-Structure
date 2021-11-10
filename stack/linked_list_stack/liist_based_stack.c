#include "List_based_stack.h"
#include <stdio.h>
#include <stdlib.h>

void StackInit(stack *pstack)
{
	pstack->head = NULL;
}

void  Stack_push(stack *pstack, Data pdata)
{
	Node *new_node = (Node*)malloc(sizeof(Node));
	new_node->data = pdata;
	new_node->next = pstack->head;
	pstack->head = new_node;
}

int Stack_is_empty(stack *pstack)
{
	if(pstack->head == NULL)
		return TRUE;
	return FALSE;
}

Data Stack_pop(stack *pstack)
{
	if(pstack->head == NULL)
	{
		printf("head pointing NULL");
		exit(-1);
	}
	Data rdata = pstack->head->data;
	Node *rnode = pstack->head;
	pstack->head = pstack->head->next;
	free(rnode);
	return rdata;
}

Data Stack_peek(stack *pstack)
{
	if(pstack->head == NULL)
	{
		printf("head pointing Null");
		exit(-1);
	}
	Data rdata;
	rdata = pstack->head->data;
	return rdata;
}



