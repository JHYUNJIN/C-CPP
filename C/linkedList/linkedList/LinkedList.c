#include<stdio.h> //  < > --> c ���� �����ϴ� ��������� insert�� �� ����ϴ� ��ȣ�̴�.
#include<string.h>
#include"LinkedList.h" // " " --> ����ڰ� ������ ��������� insert�� �� ����ϴ� ��ȣ�̴�.

// ���� ���� ����Ʈ ����(�����)
linkedList_h* createLinkedList(void) {
	linkedList_h* L; // ������ ������ L�� ����
	L = (linkedList_h*)malloc(sizeof(linkedList_h)); // �޸� �Ҵ����ִ� �ڵ� 
	L->head = NULL; // ���鸮��Ʈ
	return L;
}

void insertFirstNode(linkedList_h* L, char* x){// �ҽ����Ͽ��� �޼ҵ带 �������ָ� ��������� �޼ҵ� ���� ���� �������.
	listNode* newNode; // newNode �����ϴ� �ڵ�
	newNode = (listNode*)malloc(sizeof(listNode)); // �޸� �Ҵ����ִ� �ڵ�
	strcpy(newNode->data, x);
	newNode->pLink = L->head;
	L->head = newNode;
}

void insertMiddleNode(linkedList_h* L, listNode* pre, char* x) {
	listNode* newNode;
	newNode = (listNode*)malloc(sizeof(listNode));
	strcpy(newNode->data, x);
	if (L->head == NULL) { // ���� ����Ʈ�� ���, ����� ����Ű�� ����� �ּҰ� NULL�̶��
		newNode->pLink = L->head; // ��� - NULL
		L->head = newNode; // ��� - ����� - NULL
	}
	else if(pre==NULL){ // �����ϰ��� �ϴ� ��ġ�� �������� �տ� ��尡 NULL�̸�
		newNode->pLink = L->head; // ��� - �ճ�� - NULL
		L->head = newNode; // ��� - ����� - �ճ�� - NULL
	}
	else {
		newNode->pLink = pre->pLink; // ��� - �ճ�� - ��� - NULL 
		pre->pLink = newNode; // ��� - �ճ�� - ����� - ��� - NULL 
	}
}

void insertLastNode(linkedList_h* L, char* x) {
	listNode* newNode;
	listNode* temp;
	newNode = (listNode*)malloc(sizeof(listNode));
	strcpy(newNode->data, x);
	newNode->pLink = NULL;
	if (L->head == NULL) { // ���� ����Ʈ�� ���, ����� ����Ű�� ����� �ּҰ� NULL�̶��
		L->head = newNode; // ��� - ����� - NULL
		return;
	}
	temp = L->head;
	while (temp->pLink != NULL)
		temp = temp->pLink;
	temp->pLink = newNode;
}

void printList(linkedList_h* L){
	listNode* p;
	printf("L = (");
	p = L->head;
	if (p == NULL) {
		printf(")\n");
		return;
	}
	else {
		while (p != NULL) {
			printf("%s", p->data);
			p = p->pLink;
			if (p != NULL) { printf(","); }
		}
			printf(")\n");
	}
}
