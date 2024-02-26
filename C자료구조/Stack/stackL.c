#include  <stdlib.h>
#include "stackL.h"

int isStackEmpty() {
	if (top == NULL) return 1;
	else return 0;
}

void push(element item) {
	stackNode* temp = (stackNode*)malloc(sizeof(stackNode));
	temp->data = item;
	temp->link = top;   
	top = temp;          
}

element pop() {
	element item;
	stackNode* temp = top;

	if (isStackEmpty()) {	
		printf("Stack �������\n");
		return 0;
	}
	else {				
		item = temp->data;
		top = temp->link;	
		free(temp);			
		return item;		
	}
}


void printStack() {
	stackNode* p = top;
	printf("\n STACK [ ");
	while (p) {
		printf("%d ", p->data);
		p = p->link;
	}
	printf("] ");
}


���� ť �����
1. �����͸� ������ �� ��忡 ���� �޸� �Ҵ�ް� �����͸� 

2. �� ��带 �����ϱ� ���� ���� ť�� ����������� �˻�
front = NULL;
rear = NULL;

3. ���鿬�� ť ����
createLinkedQueue();
front=NULL;
rear=NULL;

4.ù��° ������ ����
enLQueue(LQ,A);
front=1
rear=1

5.�ι�° ������ ����
enLQueue(LQ,B);
front=1
rear=2

6.���� ����
deLQueue(LQ);
front=2
rear=2


	�����͸� ���� �� ����
ù��°���� front�� rear�� ����Ű�� ���� ����.
front==rear
��� ���� ����� �ּҸ� �־��ְ�
���� �߰��� ����� ���� ������ �ּҹ濡 �־��ش�.























