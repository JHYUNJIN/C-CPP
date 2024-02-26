#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct LinkedListNodeType {
	int data;
	struct LinkedListNodeType* pLink;
} LinkedListNode;

typedef struct LinkedListType {
	int             currentCount;  // 노드의 개수를 세는 코드
	LinkedListNode  headerNode;
} LinkedList;

LinkedList* createLinkedList() {
	LinkedList* pReturn = (LinkedList*)malloc(sizeof(LinkedList)); // 동적메모리 주소를 할당하는 코드
	memset(pReturn, 0, sizeof(LinkedList)); // 해당주소의 동적메모리 크기를 초기화하는 코드
	return pReturn;
}


//pCurrentNode = headNode
//for (int i = 0; i <= position; i++) {
//	pCurrentNode = pCurrentNode->pCurrentNodeLink; // pCurrentNodeLink가 positionLink가 될 때 반복문을 멈추고
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

	pNewNode->pLink = pPreNode->pLink; // 새노드의 pLink에 앞노드의 pLink를 넣어라
	pPreNode->pLink = pNewNode; // 앞노드의 pLink를 새노드로 가리켜라.
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
	printf("위치: %d, 값: %d\n", 1, value);

	removeLinkedListData(pList, 1);
	deleteLinkedList(pList);
	printf("위치: %d, 값: %d\n", 1, value);

	return 0;
}






