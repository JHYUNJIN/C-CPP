#pragma once
#define Q_SIZE 5

typedef char element; // 자료형을 char로 정의

// Queue 노드의 구조체 선언
typedef struct {
	element queue[Q_SIZE]; // char자료형 
	int front, rear;   // int 자료형
}QueueType; //QueueType을 자료형으로 사용가능 typedef 때문에

QueueType* createQueue(void);
int isQueueEmpty(QueueType* Q);
int isQueueFull(QueueType* Q);
void enqueue(QueueType* Q,element item);
element dequeue(QueueType* Q);
void printQ(QueueType* Q);
