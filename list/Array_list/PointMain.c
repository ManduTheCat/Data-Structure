#include "point.h"
#include "ArrayList.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
	List list;
	point *ppos;

	ppos = (point*)malloc(sizeof(point));
	SetPointPos(ppos,2,1);
	LInsert(&list, ppos);

	ppos = (point*)malloc(sizeof(point));
	SetPointPos(ppos,2,2);
	LInsert(&list, ppos);

	ppos = (point*)malloc(sizeof(point));
	SetPointPos(ppos,3,1);
	LInsert(&list, ppos);

	ppos = (point*)malloc(sizeof(point));
	SetPointPos(ppos,3,2);
	LInsert(&list, ppos);

	printf("numboer of data : %d", LCount(&list));

	free(ppos);

}
