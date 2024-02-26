#include<stdio.h>
#include"stackA.h""

int main(void) {
	element item;
	printf("스택 연산\n");

	printStack();
	push(1); printStack();
	push(2); printStack();
	push(3); printStack();
	item = pop(); printStack();
	printf("\t pop = %d", item);
	item = pop(); printStack();
	printf("\t pop = %d", item);
	item = pop(); printStack();
	printf("\t pop = %d", item);

	getchar();
	return 0;


}