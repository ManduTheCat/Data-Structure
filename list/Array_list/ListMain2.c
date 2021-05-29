#include<stdio.h>
#include"ArrayList.h"

int main()
{
 List	list;
 int	data;
 int	i;
 int	sum;

 sum = 0;
 i = -1;
 ListInit(&list);

 while(++i < 10)
	 LInsert(&list, i);
 LFirst(&list, &data);
 sum+=data;

 while(LNext(&list, &data))
	 sum+=data;
 printf("sum : %d\n", sum);
 LFirst(&list, &data);

 while(LNext(&list, &data))
 {
	 if (data % 2 == 0 || data %3 == 0)
		 LRemove(&list);
 }

 if(LFirst(&list, &data))
 {
	 printf("data : %d ", data);
	 while(LNext(&list, &data))
		printf("%d ",data);
 }
}
