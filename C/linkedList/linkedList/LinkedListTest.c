#include<stdio.h>
#include"LinkedList.h"

int main(void) {

	printf("1.공백 리스트 생성\n");

	linkedList_h* L;
	L = createLinkedList();
	printf("1.공백 리스트 생성\n");
	printList(L);

	printf("2.리스트 첫번째에 [수]데이터 삽입\n");
	insertFirstNode(L, "수");
	printList(L);
	
	printf("3.리스트 마지막에 [금]데이터 삽입\n");
	insertFirstNode(L, "금");
	printList(L);

	printf("4.리스트 첫번에 [월]데이터 삽입\n");
	insertFirstNode(L, "월");
	printList(L);

	getchar(); // 메모리에 기록되게 해주는 코드

	return 0;



}