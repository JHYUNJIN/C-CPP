#pragma once
typedef int element;		

typedef struct  stackNode {	
	element data;
	struct stackNode* link;
} stackNode;

stackNode* top;				

int isStackEmpty();
void push(element item);
element pop();
void printStack();