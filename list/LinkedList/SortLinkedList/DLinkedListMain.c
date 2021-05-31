#include "DLinkedList.h"
#include <stdio.h>

int main()
{
	List	list;
	int		data;

	ListInit(&list);
	LInsert(&list, 11);
	LInsert(&list, 11);
	LInsert(&list, 22);
	LInsert(&list, 22);
	LInsert(&list, 33);

	if(LFirst(&list,&data))
	{
		printf("inserted data is %d ",data);
		while(LNext(&list,&data))
		{
			printf("%d ",data);
		}
	}

	printf("\n--------remove 1 ------\n");
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
	printf("--------remove 1 ------\n");
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
