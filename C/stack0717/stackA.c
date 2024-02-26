#include<stdio.h>
#include"stackA.h"

int top = -1;

int isStackEmpty(void) {
	if (top == -1) return 1;
	else return 0;
}

int isStackFull(void) {
	if (top == STACK_SIZE - 1) return 1;
	else return 0;
}

void push(element item) {
	if (isStackFull()) {
		printf("스택이 포화 상태입니다. 데이터를 추가할 수 없습니다.\n");
		return 0;
	}
	else stack[++top] = item; // top을 증가한 후에 top 위치에 원소 삽입
}

element pop(void) {
	if (isStackEmpty()) {
		printf("스택이 비어있습니다. 삭제할 데이터가 없습니다.\n");
		return 0;
	}
	else return stack[top--];
}

void printStack(void) {
	int i;
	printf("\n스택 [ ");
	for (i = 0; i <= top; i++) {
		printf("%d ", stack[i]);
	}
	printf("]");
}