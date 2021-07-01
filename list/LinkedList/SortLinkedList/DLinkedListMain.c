#include "DLinkedList.h"
#include <stdio.h>

int sortingRole(int d1, int d2)
{
	if(d1 > d2)
		return 1;
	else
		return 0;
}

int main()
{
	List	list;
	int		data;

	ListInit(&list);
	SetSortRule(&list, sortingRole);
	LInsert(&list, 22);
	LInsert(&list, 11);
	LInsert(&list, 22);
	LInsert(&list, 22);
	LInsert(&list, 22);
	LInsert(&list, 4);
	LInsert(&list, 106);
	LInsert(&list, 1);

	printf("nummber of data : %d\n",LCount(&list));
	if(LFirst(&list,&data))
	{
		printf("inserted data is %d ",data);
		while(LNext(&list,&data))
		{
			printf("%d ",data);
		}
	}

	printf("\n--------remove 22 ------\n");
	if(LFirst(&list,&data))
	{
		if(data == 22)
			LRemove(&list);
		while(LNext(&list,&data))
		{
			if(data == 22)
				LRemove(&list);
		}
	}
	printf("--------remove 22 ------\n");
	printf("nummber of data : %d\n",LCount(&list));
	if(LFirst(&list,&data))
	{
		printf("inserted data is %d ",data);
		while(LNext(&list,&data))
		{
			printf("%d ",data);
		}
	}
	return 0;
}
