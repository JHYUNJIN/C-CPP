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
		printf("Stack 공백상태\n");
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


연결 큐 만들기
1. 데이터를 삽입할 새 노드에 대한 메모리 할당받고 데이터를 

2. 새 노드를 삽입하기 전에 연결 큐가 공백상태인지 검사
front = NULL;
rear = NULL;

3. 공백연결 큐 생성
createLinkedQueue();
front=NULL;
rear=NULL;

4.첫번째 데이터 삽입
enLQueue(LQ,A);
front=1
rear=1

5.두번째 데이터 삽입
enLQueue(LQ,B);
front=1
rear=2

6.원소 삭제
deLQueue(LQ);
front=2
rear=2


	데이터를 삽입 한 이후
첫번째노드는 front와 rear가 가리키는 값은 같다.
front==rear
리어에 다음 노드의 주소를 넣어주고
새로 추가할 노드의 값을 리어의 주소방에 넣어준다.























