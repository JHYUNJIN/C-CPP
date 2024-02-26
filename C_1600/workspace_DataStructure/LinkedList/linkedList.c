#include<stdio.h>
#include<stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

typedef struct Node{// struct이름을 설정해주지 않는다면 아래 struct Node* link->link를 타고타고 들어갈 수 가 없다.
	int data; // 실질적인 리스트의 데이터가 저장될 공간
	struct Node* link; 
}listNode;

typedef struct {
	listNode* head;
}linkedList;

//초기화 함수
void init(linkedList* list) {
	list->head = NULL;
}

//데이터 확인용 show 함수
void show(linkedList* list) {
	//순회용 포인터
	listNode* curr = list->head;// curr에는 첫번째 노드를 담아준다.
		while (curr != NULL) {
			printf("[%d]->", curr->data);
			curr = curr->link;
		}
		printf("\n");
}



// 추가
//맨 앞에 추가하기
void insertFirst(linkedList* list, int element) {
	// 새롭게 추가할 노드는 이 함수의 호출이 끝나더라도 메모리에 남아있어야 한다.
	// 따라서 힙메모리에 동적할당을 해줘야한다.
	listNode* newNode = (listNode*)malloc(sizeof(listNode));
	// newNode에는 새롭게 만들어진 노드가 할당된 주소가 담겨있다.
	newNode->data = element;
	newNode->link = list->head;
	list->head = newNode;
	printf("%d노드의 주소 : %d\n", element, newNode);
}

//데이터 추가
void append(linkedList* list, int element) {
	// 리시트에 데이터가 하나도 없다면
	if (list->head == NULL) {
		insertFirst(list, element); // 맨 처음에 데이터를 추가한다.
		return; // 함수 종료의 의미로 사용
	}
	listNode* curr = list->head;
	while (curr->link!=NULL) {
		curr = curr->link;
	}
	//반복문을 다 돌고나면 curr에는 마지막 노드가 담겨있다.
	listNode* newNode = (listNode*)malloc(sizeof(listNode));
	newNode->data = element;
	newNode->link = NULL;
	curr->link = newNode;
}

// 데이터 중간에 추가하기
// 인덱스 번호를 활용하여 추가하기
void insert(linkedList* list, int index, int element) {
	// index가 음수이거나 리스트 길이 보다 길 때
	if (index<0 || index>len(list))	{
		printf("ERROR!! 인덱스 범위 오류\n");
		return;
	}

	// 삽입하고자 하는 index가 0일 경우
	if (index == 0) {
		insertFirst(list, element);
		return;
	}
	listNode* curr = list->head;
	for (int i = 0; i < index - 1;i++) {
		curr = curr->link;
	}
	//반복문 다 돌고 나오면 curr에는 내가 삽입할 이전 노드가 들어있게 된다.
	listNode* newNode = (listNode*)malloc(sizeof(listNode));
	newNode->data = element;
	newNode->link = curr->link;
	curr->link = newNode;
}

// 리스트 데이터의 개수를 알려주는 함수
int len(linkedList* list) {
	if (list->head==NULL) {
		return 0;
	}
	listNode* curr = list->head;
	int length = 0;
	while (curr !=NULL)	{
		length++; curr = curr->link;
	}
	// 반복문이 다 끝나게 된다면 length에는 리스트 데이터의 개수가 담기게 된다.
	return length;
}

//삭제
//맨 앞 데이터 삭제
void removeFirst(linkedList* list) {
	// 리스트가 비어있을 때
	if (list->head == NULL) {
		printf("리스트가 비어있습니다. 삭제 할 데이터가 없습니다.\n");
		return;
	}
	//삭제할 노드
	//우리가 삭제할 노드는 head에 담겨있는 주소이다.
	//하지만, 그 주소를 바로 삭제해버린다면, 링크드리스트의 시작 주소를 잃어버리는 것이기에
	//삭제하기 전에 head에 삭제할 데이터 다음 데이터의 주소를 담아줘야한다.
	//그렇게 되면, 동적할당 해제 하고 싶은 주소를 잃어버리기 때문에
	// 포인터를 하나 만들어서 내가 삭제하고 싶은 노드의 주소를 담아놓는다.
	listNode* removeNode = list->head;
	list->head = removeNode->link;
	free(removeNode);
}

// 마지막 데이터 삭제하기
void removeLast(linkedList* list) {
	if (list->head == NULL) {
		printf("리스트가 비어있습니다. 삭제 할 데이터가 없습니다.\n");
		return;
	}
	if (len(list)==1) {
		removeFirst(list);
		return;
	}

	//리스트 데이터가 1개 들어있을 경우
	//curr->link가 NULL이기 때문에
	//curr->link->link는 사실상 NULL->link를 써버리는 것과 같게 된다.

	listNode* curr = list->head;
	while (curr->link->link != NULL) {
		curr = curr->link;
	}
	// 반복이 끝나면 curr에는 마지막 이전 노드가 들어있다.
	free(curr->link);
	curr->link = NULL;
}

// 인덱스번호로 삭제하기
void removeByIdx(linkedList* list, int index) {
	if (index<0 || index>len(list) - 1) {
		printf("ERROR!! 인덱스오류\n");
		return;
	}

	//0번째 인덱스 삭제하기
	if (index == 0) {
		removeFirst(list);
		return;
	}

	listNode* curr = list->head;
	for (int i = 0; i < index - 1; i++) {
		curr = curr->link;
	}
	//curr 에는 삭제하기 이전 노드가 들어있다.
	listNode* removeNode = curr->link;
	curr->link = removeNode->link;
	free(removeNode);
}

// 첫번째 데이터 수정하기
void updateFirst(linkedList* list, int element) {
	if (list->head == NULL) {
		printf("리스트가 비어있습니다. 수정 할 데이터가 없습니다.\n");
		return;
	}
	list->head->data = element;
}

//인덱스 번호로 데이터 수정하기
void updateByIdx(linkedList* list, int index, int element) {
	if(index<0 || index > len(list)-1){
		printf("ERROR!! 수정할 인덱스번호가 없습니다.");
		return;
	}

	listNode* curr = list->head;
	for (int i = 0; i < index; i++)	{
		curr = curr->link;
	}
	curr->data = element;
}


//검색
void select(linkedList* list, int index, int* res) {
	if (index < 0 || index>len(list)-1)	{
		printf("ERROR!! 검색할 인덱스번호가 없습니다.");
		*res = NULL;
		return;
	}

	listNode* curr = list->head;
	for (int i = 0; i < index; i++)	{
		curr = curr->link;
	}
	*res = curr->data;
	printf("[%d]\n", *res);
}






int main() {

	linkedList list;
	init(&list);
	//insertFirst(&list, 10);
	append(&list, 20);
	append(&list, 30);
	append(&list, 40);
	insert(&list, 1, 5);
	show(&list);
	insert(&list, 0, 5);
	insert(&list, 3, 555);
	show(&list);
	insert(&list, -1, 555);
	show(&list);
	printf("현재 리스트의 길이 : %d\n", len(&list));
	removeFirst(&list);
	printf("맨 앞 데이터 삭제\n");
	show(&list);
	append(&list, 999);
	show(&list);
	removeLast(&list);
	printf("맨 뒤 데이터 삭제\n");
	show(&list);
	printf("인덱스 번호로 데이터 삭제, 2번 인덱스의 데이터 삭제\n");
	removeByIdx(&list, 2);
	show(&list);
	printf("맨 앞에 데이터 수정\n");
	updateFirst(&list, 5000);
	show(&list);
	printf("인덱스 번호로 데이터 수정\n");
	updateByIdx(&list, 2, 7000);
	show(&list);
	printf("인덱스 번호로 검색하기\n");
	int res;
	select(&list, 2, &res);
	




	return 0;
}