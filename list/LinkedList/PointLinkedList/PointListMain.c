#include <stdlib.h>
#include <stdio.h>
#include "Point.h"
#include "DLinkedList.h"

int main()
{
	List list;
	Point *ppos;
	Point *comppos;

	ListInit(&list);
	ppos = (Point*)malloc(sizeof(Point));
	comppos = (Point*)malloc(sizeof(Point));


	ppos = (Point*)malloc(sizeof(Point));
	setPointPos(ppos, 1,2);
	LInsert(&list,ppos);

	ppos = (Point*)malloc(sizeof(Point));
	setPointPos(ppos, 2,2);
	LInsert(&list,ppos);

	ppos = (Point*)malloc(sizeof(Point));
	setPointPos(ppos, 3,1);
	LInsert(&list,ppos);

	ppos = (Point*)malloc(sizeof(Point));
	setPointPos(ppos, 3,2);
	LInsert(&list,ppos);

	comppos->xpos = 1;
	comppos->ypos = 2;

	printf(" ==== print list ====\n");

	if(LFirst(&list,&ppos))
	{
		ShowPointPos(ppos);
		while(LNext(&list, &ppos))
		{
			ShowPointPos(ppos);
		}
	}

	printf(" ==== del 1,2 =====\n");

	if(LFirst(&list, &ppos))
	{
		if(PointCompare(ppos, comppos) == 0)
		{
			LRemove(&list);
		}
		while(LNext(&list, &ppos))
		{
			if(PointCompare(ppos, comppos) == 0)
			{
				LRemove(&list);
			}
		}
	}

	printf(" ==== print list =====\n");
	if(LFirst(&list,&ppos))
	{
		ShowPointPos(ppos);
		while(LNext(&list, &ppos))
		{
			ShowPointPos(ppos);
		}
	}
}
