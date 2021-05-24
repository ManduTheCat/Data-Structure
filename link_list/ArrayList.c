#include <stdio.h>
#include "ArrayList.h"

void ListInit(List *plist)
{
	(plist->numOfData) = 0;
	(plist->curPosition) = -1;
}

void LInsert(List *plist, LData data)
{
	if(plist->numOfData >= LIST_LEN)
	{
		puts("저장이불가능합니다");
		return;
	}
	plist->arr[plist->numOfData] = data;
	(plist->numOfData)++;
}

int LFirst(List *plist, LData *pdata)
{
	if((plist->numOfData) == 0)
		return FALSE;
	(plist->curPosition) = 0;
	*pdata = plist->arr[plist->curPosition];
	return TRUE;
}

int LNext(List *plist, LData *pdata)
{
	if((plist->curPosition) >= ((plist->numOfData)-1))
		return FALSE;
	(plist->curPosition)++;
	(*pdata = plist->arr[plist->curPosition]);
	return TRUE;
}

LData LRemove(List *plist)
{
	int		rpos;
	int		num_data;
	LData 	rdata;
	int 	i;

	rpos = plist->curPosition;
	num_data = plist->numOfData;
	rdata = plist->arr[rpos];

	i = rpos;
	while(i < num_data - 1)
	{
		plist->arr[i] = plist->arr[i+1];
		i++;
	}
	(plist->numOfData)--;
	(plist->curPosition)--;
	return rdata;
}

int LCount(List *plist)
{
	return (plist->numOfData);
}
