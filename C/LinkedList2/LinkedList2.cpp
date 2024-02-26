#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct LinkedListNodeType {
	int data;
	struct LinkedListNodeType* pLink;
} LinkedListNode;

typedef struct LinkedListType {
	int             currentCount;  // ����� ������ ���� �ڵ�
	LinkedListNode  headerNode;
} LinkedList;

LinkedList* createLinkedList() {
	LinkedList* pReturn = (LinkedList*)malloc(sizeof(LinkedList)); // �����޸� �ּҸ� �Ҵ��ϴ� �ڵ�
	memset(pReturn, 0, sizeof(LinkedList)); // �ش��ּ��� �����޸� ũ�⸦ �ʱ�ȭ�ϴ� �ڵ�
	return pReturn;
}


//pCurrentNode = headNode
//for (int i = 0; i <= position; i++) {
//	pCurrentNode = pCurrentNode->pCurrentNodeLink; // pCurrentNodeLink�� positionLink�� �� �� �ݺ����� ���߰�
//}
//pCurrentNode = data 

int getLinkedListData(LinkedList* pList, int position) {
	int i = 0;

	LinkedListNode* pCurrentNode = &(pList->headerNode);
	for (i = 0; i <= position; i++) {
		pCurrentNode = pCurrentNode->pLink;
	}

	return pCurrentNode->data;
}

int addLinkedListData(LinkedList* pList, int position, int data) {
	int i = 0;
	LinkedListNode* pNewNode = NULL;
	LinkedListNode* pPreNode = NULL;

	pNewNode = (LinkedListNode*)malloc(sizeof(LinkedListNode));
	pNewNode->data = data;

	pPreNode = &(pList->headerNode);
	for (i = 0; i < position; i++) {
		pPreNode = pPreNode->pLink; 
	}

	pNewNode->pLink = pPreNode->pLink; // ������� pLink�� �ճ���� pLink�� �־��
	pPreNode->pLink = pNewNode; // �ճ���� pLink�� ������ �����Ѷ�.
	pList->currentCount++;
	return 0;
}

int removeLinkedListData(LinkedList* pList, int position) {
	int i = 0;
	LinkedListNode* pDelNode = NULL;
	LinkedListNode* pPreNode = NULL;

	pPreNode = &(pList->headerNode);
	for (i = 0; i < position; i++) {
		pPreNode = pPreNode->pLink;
	}

	pDelNode = pPreNode->pLink;
	pPreNode->pLink = pDelNode->pLink;
	free(pDelNode);
	pList->currentCount--;
	return 0;
}

void deleteLinkedList(LinkedList* pList) {
	LinkedListNode* pDelNode = NULL;
	LinkedListNode* pPreNode = pList->headerNode.pLink;
	while (pPreNode != NULL) {
		pDelNode = pPreNode;
		pPreNode = pPreNode->pLink;

		free(pDelNode);
	}

	free(pList);
}

int getLinkedListLength(LinkedList* pList) {
	if (NULL != pList) {
		return pList->currentCount;
	}
	return 0;
}

int main(void) {
	LinkedList* pList = NULL;
	int value = 0;

	pList = createLinkedList();
	addLinkedListData(pList, 0, 10);
	addLinkedListData(pList, 1, 20);
	addLinkedListData(pList, 1, 30);

	value = getLinkedListData(pList, 1);
	printf("��ġ: %d, ��: %d\n", 1, value);

	removeLinkedListData(pList, 1);
	deleteLinkedList(pList);
	printf("��ġ: %d, ��: %d\n", 1, value);

	return 0;
}






