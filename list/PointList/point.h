#ifndef __POINT_H__
#define __POINT_H__

typedef struct _point
{
	int xpos;
	int ypos;
}point;

void SetPointPos(point *ppos, int xpos, int ypos);
void ShowPointPos(point *ppos);
int PointComp(point *ppos1, point *ppos2);
#endif
