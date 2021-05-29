#include <stdio.h>
#include <stdlib.h>

typedef struct _node
{
	int data;
	struct _node *next; //노드형 변수를 가르킬수 있는 포인터
} Node;

int main()
{
	Node *head = NULL;
	Node *tail = NULL;
	Node *cur = NULL;

	Node *newNode = NULL;
	int readData;

	while(1)
	{
		printf("input natural number :");
		scanf("%d", &readData);

		if(readData < 1)
			break;

		newNode = (Node*)malloc(sizeof(Node));
		newNode->data = readData;
		newNode->next = NULL;


		if(head == NULL)
			head = newNode;
		else
			tail->next = newNode;
		tail = newNode;
	}

	printf("\n");
	printf("total data print\n");

	if (head == NULL)
	{
		printf("deosn't exisit stored number");
	}
	else
	{
		cur = head;
		printf("%d ",cur->data);
		while(cur->next != NULL)
		{
			cur = cur->next;
			printf("%d ",cur->data);
		}
	}
	printf("\n");
	if(head == NULL)
	{
		return 0;
	}
	else
	{
		Node *delNode;
		Node *delNextNode;

		delNode = head;
		delNextNode = head->next;

		printf("%d 를 삭제합니다\n", head->data);
		free(delNode);

		while(delNextNode != NULL)
		{
			delNode = delNextNode;
			delNextNode = delNextNode->next;

			printf("%d 를 삭제합니다\n", delNode->data);
			free(delNode);
		}
	}
	return 0;
}
