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
		printf("������ ��ȭ �����Դϴ�. �����͸� �߰��� �� �����ϴ�.\n");
		return 0;
	}
	else stack[++top] = item; // top�� ������ �Ŀ� top ��ġ�� ���� ����
}

element pop(void) {
	if (isStackEmpty()) {
		printf("������ ����ֽ��ϴ�. ������ �����Ͱ� �����ϴ�.\n");
		return 0;
	}
	else return stack[top--];
}

void printStack(void) {
	int i;
	printf("\n���� [ ");
	for (i = 0; i <= top; i++) {
		printf("%d ", stack[i]);
	}
	printf("]");
}