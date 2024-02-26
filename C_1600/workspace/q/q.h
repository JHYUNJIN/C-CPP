#pragma once
#define Q_SIZE 5

typedef char element; // �ڷ����� char�� ����

// Queue ����� ����ü ����
typedef struct {
	element queue[Q_SIZE]; // char�ڷ��� 
	int front, rear;   // int �ڷ���
}QueueType; //QueueType�� �ڷ������� ��밡�� typedef ������

QueueType* createQueue(void);
int isQueueEmpty(QueueType* Q);
int isQueueFull(QueueType* Q);
void enqueue(QueueType* Q, element item);
element dequeue(QueueType* Q);
void printQ(QueueType* Q);
