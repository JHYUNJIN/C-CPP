#pragma once
#define STACK_SIZE 50 // 기호화(예약) 하는 명령어 

typedef int element; // 요소(element)의 자료형을 int로 정의, 이제 int형 대신 element를 사용하면 된다.
element stack[STACK_SIZE]; // int stack[]; --> typedef을 사용하면 --> element stack[STACK_SIZE]
// 수정하기 편하려고 기호화시켜준것이다.

int isStackEmpty(void); // 공백검사
int isStackFull(void); // stack이 포화상태인지
void push(element item);
element pop(void);
void printStack(void);