#ifndef __DB_LINKED_LIST__H_
#define __DB_LINKED_LIST__H_

#define TRUE	1;
#define FALE	2;

typedef int Data;

typedef struct __node
{
	Data data;
	struct __node *next;
	struct __node *prev;

} Node;

typedef struct __DLinkedList
{
	Node *head;
	Node *cur;
	int numOfData;
}DBLinkedList;

typedef DBLinkedList List;

void ListInit(List *plist);
void ListInsert(List *plist, Data pdata);//데이터를 입력
int ListFirst(List *plist, Data *pdata);//데이터를 다음에 조회 할거다 변수 유지된 상태에서 값만 바뀌는 구조지향
int ListNext(List *plist, Data *pdata);
int LPrevious(List *plist, Data *pdata); 
int LCount(List *plist);

#endif