#include<stdio.h>
#include"LinkedList.h"

int main(void) {

	printf("1.���� ����Ʈ ����\n");

	linkedList_h* L;
	L = createLinkedList();
	printf("1.���� ����Ʈ ����\n");
	printList(L);

	printf("2.����Ʈ ù��°�� [��]������ ����\n");
	insertFirstNode(L, "��");
	printList(L);
	
	printf("3.����Ʈ �������� [��]������ ����\n");
	insertFirstNode(L, "��");
	printList(L);

	printf("4.����Ʈ ù���� [��]������ ����\n");
	insertFirstNode(L, "��");
	printList(L);

	getchar(); // �޸𸮿� ��ϵǰ� ���ִ� �ڵ�

	return 0;



}