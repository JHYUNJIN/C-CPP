#pragma once
typedef char element;	// element를 char 자료형처럼 사용하겠다

typedef struct DQNode {	
	element data;
	struct DQNode* llink;
	struct DQNode* rlink;
} DQNode; //

typedef struct {       
	DQNode* front, * rear;
} DQueType;

DQueType* createDQue();
int isDeQEmpty(DQueType* DQ);
void insertFront(DQueType* DQ, element item);
void insertRear(DQueType* DQ, element item);
element deleteFront(DQueType* DQ);
element deleteRear(DQueType* DQ);
void printDQ(DQueType* DQ);