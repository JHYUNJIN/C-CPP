#include<stdio.h> //  < > --> c 에서 제공하는 헤더파일을 insert할 때 사용하는 기호이다.
#include<string.h>
#include"LinkedList.h" // " " --> 사용자가 정의한 헤더파일을 insert할 때 사용하는 기호이다.

// 공백 연결 리스트 생성(만들기)
linkedList_h* createLinkedList(void) {
	linkedList_h* L; // 헤더노드 변수명 L로 선언
	L = (linkedList_h*)malloc(sizeof(linkedList_h)); // 메모리 할당해주는 코드 
	L->head = NULL; // 공백리스트
	return L;
}

void insertFirstNode(linkedList_h* L, char* x){// 소스파일에서 메소드를 선언해주면 헤더파일의 메소드 오류 줄이 사라진다.
	listNode* newNode; // newNode 선언하는 코드
	newNode = (listNode*)malloc(sizeof(listNode)); // 메모리 할당해주는 코드
	strcpy(newNode->data, x);
	newNode->pLink = L->head;
	L->head = newNode;
}

void insertMiddleNode(linkedList_h* L, listNode* pre, char* x) {
	listNode* newNode;
	newNode = (listNode*)malloc(sizeof(listNode));
	strcpy(newNode->data, x);
	if (L->head == NULL) { // 공백 리스트인 경우, 헤더가 가리키는 노드의 주소가 NULL이라면
		newNode->pLink = L->head; // 헤더 - NULL
		L->head = newNode; // 헤더 - 뉴노드 - NULL
	}
	else if(pre==NULL){ // 삽입하고자 하는 위치를 기준으로 앞에 노드가 NULL이면
		newNode->pLink = L->head; // 헤더 - 앞노드 - NULL
		L->head = newNode; // 헤더 - 뉴노드 - 앞노드 - NULL
	}
	else {
		newNode->pLink = pre->pLink; // 헤더 - 앞노드 - 노드 - NULL 
		pre->pLink = newNode; // 헤더 - 앞노드 - 뉴노드 - 노드 - NULL 
	}
}

void insertLastNode(linkedList_h* L, char* x) {
	listNode* newNode;
	listNode* temp;
	newNode = (listNode*)malloc(sizeof(listNode));
	strcpy(newNode->data, x);
	newNode->pLink = NULL;
	if (L->head == NULL) { // 공백 리스트인 경우, 헤더가 가리키는 노드의 주소가 NULL이라면
		L->head = newNode; // 헤더 - 뉴노드 - NULL
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
