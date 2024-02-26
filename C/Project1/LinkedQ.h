#pragma once
typedef char element;

typedef struct QNode {
	element data;
	struct QNode* link;
} QNode;

typedef struct {
	QNode* front, * rear;
} LQueueType;

LQueueType* createLinkedQueue(); // ����
int isLQEmpty(LQueueType* LQ); // ����(���Ḯ��Ʈ���� ��ȭ���� üũ�� ���ص��ȴ�.)
void enLQueue(LQueueType* LQ, element item); // ������ �߰�
element deLQueue(LQueueType* LQ); // ������ ����
void printLQ(LQueueType* LQ); // ť ���