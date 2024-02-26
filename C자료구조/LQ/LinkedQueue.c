#include <stdio.h>
#include <stdlib.h>
#include "LinkedQueue.h"

LQueueType* createLinkedQueue() { // 공백 연결 큐 생성
	LQueueType* LQ; 
	LQ = (LQueueType*)malloc(sizeof(LQueueType)); //메모리 할당
	LQ->front = NULL;
	LQ->rear = NULL;
	return LQ;
}

int isLQEmpty(LQueueType* LQ) {
	if (LQ->front == NULL) { // 연결 큐가 공백상태인지 확인하는 코드 
		printf(" Linked Queue is empty! ");
		return 1;
	}
	else return 0;
}

// 연결 큐의 rear에 원소를 삽입하는 연산
void enLQueue(LQueueType* LQ, element item) {
	QNode* newNode = (QNode*)malloc(sizeof(QNode));
	newNode->data = item;
	newNode->link = NULL;
	if (LQ->front == NULL) { // 공백큐냐 ?		
		LQ->front = newNode;
		LQ->rear = newNode;
	}
	else {						
		LQ->rear->link = newNode;
		LQ->rear = newNode;
	}
}

element deLQueue(LQueueType* LQ) {
	QNode* old = LQ->front;
	element item;
	if (isLQEmpty(LQ)) return;
	else {
		item = old->data;
		LQ->front = LQ->front->link;
		if (LQ->front == NULL)
			LQ->rear = NULL;
		free(old);
		return item;
	}
}

element peekLQ(LQueueType* LQ) {
	element item;
	if (isLQEmpty(LQ)) return;
	else {
		item = LQ->front->data;
		return item;
	}
}

void printLQ(LQueueType* LQ) {
	QNode* temp = LQ->front;
	printf(" Linked Queue : [");
	while (temp) {
		printf("%3c", temp->data);
		temp = temp->link;
	}
	printf(" ] ");
}