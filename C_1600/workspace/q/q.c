#include<stdio.h>
#include<stdlib.h>
#include"q.h"

// 공백 큐 생성
QueueType* createQueue(void) {
	QueueType* Q;
	Q = (QueueType*)malloc(sizeof(QueueType));
	Q->front = -1;
	Q->rear = -1;
	return Q;
}

int isQueueEmpty(QueueType* Q) {
	if (Q->front == Q->rear) {
		printf("Queue가 비어있습니다.");
		return 1;
	}
	else return 0;
}

// 큐 포화상태 검사
int isQueueFull(QueueType* Q) {
	if (Q->rear == Q_SIZE - 1) {
		printf("Queue가 가득 찼습니다.");
		return 1;
	}
	else return 0;
}
// 큐의 rear에 원소 삽입
void enqueue(QueueType* Q, element item) {
	if (isQueueFull(Q)) return;
	else {
		Q->rear++;
		Q->queue[Q->rear] = item; // 헤더파일에 queue[Q_SIZE]라고 정의 해 뒀다.
	}
}
// 큐의 front에서 원소 삭제 연산
element dequeue(QueueType* Q) {
	if (isQueueEmpty) {
		printf("삭제할 데이터가 없습니다.");
		return 0;
	}
	else {
		Q->front++;
		return Q->queue[Q->front]; // 큐 프론트가 ++ 된 이후의 프론트를 q프론트에 다시 넣어주었다.
	}
}

// 큐 출력
void printQ(QueueType* Q) {
	int i;
	printf("Queue 출력 : [ ");
	for (i = Q->front + 1; i < Q->rear; i++) {
		printf("%c", Q->queue[i]);
	}
	printf(" ]");
}