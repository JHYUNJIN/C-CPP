#pragma once
#define STACK_SIZE 50 // ��ȣȭ(����) �ϴ� ��ɾ� 

typedef int element; // ���(element)�� �ڷ����� int�� ����, ���� int�� ��� element�� ����ϸ� �ȴ�.
element stack[STACK_SIZE]; // int stack[]; --> typedef�� ����ϸ� --> element stack[STACK_SIZE]
// �����ϱ� ���Ϸ��� ��ȣȭ�����ذ��̴�.

int isStackEmpty(void); // ����˻�
int isStackFull(void); // stack�� ��ȭ��������
void push(element item);
element pop(void);
void printStack(void);