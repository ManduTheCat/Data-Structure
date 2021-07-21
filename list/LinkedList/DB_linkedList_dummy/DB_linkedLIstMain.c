#include "DB_linkedList.h"
#include  <stdio.h>

int main()
{
	list list;
	int data;

	ListInit(&list);
	ListInsert(&list,5);
	ListInsert(&list,6);
	ListInsert(&list,7);
	ListInsert(&list,8);
	ListInsert(&list,9);
	ListInsert(&list,10);
	ListInsert(&list,11);
	ListInsert(&list,12);

	if(ListFirst(&list, &data))
	{
		printf("%d ", data);
		while(ListNext(&list, &data))
		{
			printf("%d ", data);
		}
		printf("\n");
	}

	if(ListFirst(&list, &data))
	{
		if(data % 2 == 0)
			LRemve(&list);
		while (ListNext(&list, &data))
		{
			if(data % 2 ==0)
				LRemve(&list);
		}

	}

	if(ListFirst(&list, &data))
	{
		printf("%d ",data);

		while (ListNext(&list, &data))
		{
			printf("%d ",data);
		}
		printf("\n");
	}
}
