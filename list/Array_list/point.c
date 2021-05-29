#include<stdio.h>
#include "point.h"

void SetPointPos(point *ppos, int xpos, int ypos)
{
	ppos->xpos = xpos;
	ppos->ypos = ypos;
}

void ShowPointPos(point *ppos)
{
	printf("[%d,%d]", ppos->xpos, ppos->ypos);
}

int PointComp(point *ppos1, point*ppos2)
{
	if((ppos1->xpos == ppos2->xpos) && (ppos1->ypos == ppos2->ypos))
		return 0;
	if((ppos1->xpos == ppos2->xpos))
		return 1;
	if((ppos1->ypos == ppos2->ypos))
		return 2;
	else
		return -1;
}
