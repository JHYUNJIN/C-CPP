#include <stdio.h>
#include <stdlib.h>
#include "LinkedQ.h"

LQueueType* createLinkedQueue() { // ���� ���� ť ����
	LQueueType* LQ;
	LQ = (LQueueType*)malloc(sizeof(LQueueType)); //�޸� �Ҵ�
	LQ->front = NULL;
	LQ->rear = NULL;
	return LQ;
}

int isLQEmpty(LQueueType* LQ) {
	if (LQ->front == NULL) { // ���� ť�� ����������� Ȯ���ϴ� �ڵ� 
		printf(" Linked Queue is empty! ");
		return 1;
	}
	else return 0;
}

// ���� ť�� rear�� ���Ҹ� �����ϴ� ����
void enLQueue(LQueueType* LQ, element item) {
	QNode* newNode = (QNode*)malloc(sizeof(QNode));
	newNode->data = item;
	newNode->link = NULL;
	if (LQ->front == NULL) { // ����ť�� ?		
		LQ->front = newNode;
		LQ->rear = newNode;
	}
	else {
		LQ->rear->link = newNode;
		LQ->rear = newNode;
	}
}

element deLQueue(LQueueType* LQ) {
	// �õ�� ������ front�� ����Ű�� ù��° ��带 ����Ų��.
	QNode* old = LQ->front; // front�� �̵��ҰŴϱ� ������ �ϳ� ���������Ѵ�.
	element item;
	if (isLQEmpty(LQ)) return;
	else {
		item = old->data; //�õ尡 ����Ű�� �����͸� item�� �����Ѵ�. --> ������ ����� ������ �ʵ尪
		LQ->front = LQ->front->link;
		if (LQ->front == NULL)
			LQ->rear = NULL;
		free(old);
		return item;
	}
}

//element peekLQ(LQueueType* LQ) {
//	element item;
//	if (isLQEmpty(LQ)) return;
//	else {
//		item = LQ->front->data;
//		return item;
//	}
//}

void printLQ(LQueueType* LQ) {
	QNode* temp = LQ->front;
	printf(" Linked Queue : [");
	while (temp) {
		printf("%3c", temp->data);
		temp = temp->link;
	}
	printf(" ] ");
}