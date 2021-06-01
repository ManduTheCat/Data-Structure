#include "Point.h"
#include <stdio.h>

void	setPointPos(Point *ppos, int x, int y)
{
	ppos->xpos = x;
	ppos->ypos = y;
}

void	ShowPointPos(Point *ppos)
{
	printf("[x : %d, y: %d]\n",ppos->xpos, ppos->ypos);
}

int		PointCompare(Point *ppos1, Point *ppos2)
{
	if(((ppos1->xpos) == (ppos2->xpos)) && ((ppos1->ypos) == (ppos2->ypos)))
		return 0;
	else if((ppos1->xpos) == (ppos2->xpos))
		return 1;
	else if((ppos1->ypos) == (ppos2->ypos))
		return 2;
	else
		return -1;
}
