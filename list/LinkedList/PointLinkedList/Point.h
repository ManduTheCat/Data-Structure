#ifndef __POINT_H__
#define __POINT_H__

typedef struct __point
{
	int xpos;
	int ypos;
}Point;

void	setPointPos(Point *ppos, int x, int y);
void	ShowPointPos(Point *ppos);
int		PointCompare(Point *ppos1, Point *ppos2);
#endif
