#include <stdio.h>
#include "stackL.h"

int main(void) {
	element item;
	top = NULL;
	printf("\n연결 스택\n");
	printStack();

	push(1);    printStack();		
	push(2);    printStack();		
	push(3);    printStack();		

	item = pop();  printStack();	
	printf("\t pop  => %d", item);

	item = pop();  printStack();	
	printf("\t pop  => %d", item);

	item = pop();  printStack();	
	printf("\t pop  => %d\n", item);

	getchar();  return 0;
}