#pragma once
typedef char element;

typedef struct QNode {
	element data;
	struct QNode* link;
} QNode;

typedef struct {
	QNode* front, * rear;
} LQueueType;

LQueueType* createLinkedQueue(); // 공백
int isLQEmpty(LQueueType* LQ); // 삭제(연결리스트에서 포화상태 체크는 안해도된다.)
void enLQueue(LQueueType* LQ, element item); // 데이터 추가
element deLQueue(LQueueType* LQ); // 데이터 삭제
void printLQ(LQueueType* LQ); // 큐 출력