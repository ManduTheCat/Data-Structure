#include "point.h"
#include "ArrayList.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
	List list;
	point *ppos; //ppos = 주소
	point compPos;

	ListInit(&list);
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

	printf("numboer of data : %d\n", LCount(&list));

	if(LFirst(&list, &ppos))
	{
		ShowPointPos(ppos);
		printf("\n");
		while(LNext(&list, &ppos))
		{
			ShowPointPos(ppos);
			printf("\n");
		}
	}
	compPos.xpos = 2;
	compPos.ypos = 0;

	printf("----delet x = 2----\n");
	if(LFirst(&list,&ppos))
	{
		if(PointComp(ppos,&compPos )== 1)
		{
			LRemove(&list);
			free(ppos);
		}
		while(LNext(&list, &ppos))
		{
			if(PointComp(ppos, &compPos) == 1)
			{
				LRemove(&list);
				free(ppos);
			}
		}
	}
	printf("number of data : %d \n",LCount(&list));

	if(LFirst(&list, &ppos))
	{
		ShowPointPos(ppos);
		while(LNext(&list, &ppos))
		{
			printf("\n");
			ShowPointPos(ppos);
		}
	}
}
