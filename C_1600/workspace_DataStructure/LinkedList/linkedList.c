#include<stdio.h>
#include<stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

typedef struct Node{// struct�̸��� ���������� �ʴ´ٸ� �Ʒ� struct Node* link->link�� Ÿ��Ÿ�� �� �� �� ����.
	int data; // �������� ����Ʈ�� �����Ͱ� ����� ����
	struct Node* link; 
}listNode;

typedef struct {
	listNode* head;
}linkedList;

//�ʱ�ȭ �Լ�
void init(linkedList* list) {
	list->head = NULL;
}

//������ Ȯ�ο� show �Լ�
void show(linkedList* list) {
	//��ȸ�� ������
	listNode* curr = list->head;// curr���� ù��° ��带 ����ش�.
		while (curr != NULL) {
			printf("[%d]->", curr->data);
			curr = curr->link;
		}
		printf("\n");
}



// �߰�
//�� �տ� �߰��ϱ�
void insertFirst(linkedList* list, int element) {
	// ���Ӱ� �߰��� ���� �� �Լ��� ȣ���� �������� �޸𸮿� �����־�� �Ѵ�.
	// ���� ���޸𸮿� �����Ҵ��� ������Ѵ�.
	listNode* newNode = (listNode*)malloc(sizeof(listNode));
	// newNode���� ���Ӱ� ������� ��尡 �Ҵ�� �ּҰ� ����ִ�.
	newNode->data = element;
	newNode->link = list->head;
	list->head = newNode;
	printf("%d����� �ּ� : %d\n", element, newNode);
}

//������ �߰�
void append(linkedList* list, int element) {
	// ����Ʈ�� �����Ͱ� �ϳ��� ���ٸ�
	if (list->head == NULL) {
		insertFirst(list, element); // �� ó���� �����͸� �߰��Ѵ�.
		return; // �Լ� ������ �ǹ̷� ���
	}
	listNode* curr = list->head;
	while (curr->link!=NULL) {
		curr = curr->link;
	}
	//�ݺ����� �� ������ curr���� ������ ��尡 ����ִ�.
	listNode* newNode = (listNode*)malloc(sizeof(listNode));
	newNode->data = element;
	newNode->link = NULL;
	curr->link = newNode;
}

// ������ �߰��� �߰��ϱ�
// �ε��� ��ȣ�� Ȱ���Ͽ� �߰��ϱ�
void insert(linkedList* list, int index, int element) {
	// index�� �����̰ų� ����Ʈ ���� ���� �� ��
	if (index<0 || index>len(list))	{
		printf("ERROR!! �ε��� ���� ����\n");
		return;
	}

	// �����ϰ��� �ϴ� index�� 0�� ���
	if (index == 0) {
		insertFirst(list, element);
		return;
	}
	listNode* curr = list->head;
	for (int i = 0; i < index - 1;i++) {
		curr = curr->link;
	}
	//�ݺ��� �� ���� ������ curr���� ���� ������ ���� ��尡 ����ְ� �ȴ�.
	listNode* newNode = (listNode*)malloc(sizeof(listNode));
	newNode->data = element;
	newNode->link = curr->link;
	curr->link = newNode;
}

// ����Ʈ �������� ������ �˷��ִ� �Լ�
int len(linkedList* list) {
	if (list->head==NULL) {
		return 0;
	}
	listNode* curr = list->head;
	int length = 0;
	while (curr !=NULL)	{
		length++; curr = curr->link;
	}
	// �ݺ����� �� ������ �ȴٸ� length���� ����Ʈ �������� ������ ���� �ȴ�.
	return length;
}

//����
//�� �� ������ ����
void removeFirst(linkedList* list) {
	// ����Ʈ�� ������� ��
	if (list->head == NULL) {
		printf("����Ʈ�� ����ֽ��ϴ�. ���� �� �����Ͱ� �����ϴ�.\n");
		return;
	}
	//������ ���
	//�츮�� ������ ���� head�� ����ִ� �ּ��̴�.
	//������, �� �ּҸ� �ٷ� �����ع����ٸ�, ��ũ�帮��Ʈ�� ���� �ּҸ� �Ҿ������ ���̱⿡
	//�����ϱ� ���� head�� ������ ������ ���� �������� �ּҸ� �������Ѵ�.
	//�׷��� �Ǹ�, �����Ҵ� ���� �ϰ� ���� �ּҸ� �Ҿ������ ������
	// �����͸� �ϳ� ���� ���� �����ϰ� ���� ����� �ּҸ� ��Ƴ��´�.
	listNode* removeNode = list->head;
	list->head = removeNode->link;
	free(removeNode);
}

// ������ ������ �����ϱ�
void removeLast(linkedList* list) {
	if (list->head == NULL) {
		printf("����Ʈ�� ����ֽ��ϴ�. ���� �� �����Ͱ� �����ϴ�.\n");
		return;
	}
	if (len(list)==1) {
		removeFirst(list);
		return;
	}

	//����Ʈ �����Ͱ� 1�� ������� ���
	//curr->link�� NULL�̱� ������
	//curr->link->link�� ��ǻ� NULL->link�� ������� �Ͱ� ���� �ȴ�.

	listNode* curr = list->head;
	while (curr->link->link != NULL) {
		curr = curr->link;
	}
	// �ݺ��� ������ curr���� ������ ���� ��尡 ����ִ�.
	free(curr->link);
	curr->link = NULL;
}

// �ε�����ȣ�� �����ϱ�
void removeByIdx(linkedList* list, int index) {
	if (index<0 || index>len(list) - 1) {
		printf("ERROR!! �ε�������\n");
		return;
	}

	//0��° �ε��� �����ϱ�
	if (index == 0) {
		removeFirst(list);
		return;
	}

	listNode* curr = list->head;
	for (int i = 0; i < index - 1; i++) {
		curr = curr->link;
	}
	//curr ���� �����ϱ� ���� ��尡 ����ִ�.
	listNode* removeNode = curr->link;
	curr->link = removeNode->link;
	free(removeNode);
}

// ù��° ������ �����ϱ�
void updateFirst(linkedList* list, int element) {
	if (list->head == NULL) {
		printf("����Ʈ�� ����ֽ��ϴ�. ���� �� �����Ͱ� �����ϴ�.\n");
		return;
	}
	list->head->data = element;
}

//�ε��� ��ȣ�� ������ �����ϱ�
void updateByIdx(linkedList* list, int index, int element) {
	if(index<0 || index > len(list)-1){
		printf("ERROR!! ������ �ε�����ȣ�� �����ϴ�.");
		return;
	}

	listNode* curr = list->head;
	for (int i = 0; i < index; i++)	{
		curr = curr->link;
	}
	curr->data = element;
}


//�˻�
void select(linkedList* list, int index, int* res) {
	if (index < 0 || index>len(list)-1)	{
		printf("ERROR!! �˻��� �ε�����ȣ�� �����ϴ�.");
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
	printf("���� ����Ʈ�� ���� : %d\n", len(&list));
	removeFirst(&list);
	printf("�� �� ������ ����\n");
	show(&list);
	append(&list, 999);
	show(&list);
	removeLast(&list);
	printf("�� �� ������ ����\n");
	show(&list);
	printf("�ε��� ��ȣ�� ������ ����, 2�� �ε����� ������ ����\n");
	removeByIdx(&list, 2);
	show(&list);
	printf("�� �տ� ������ ����\n");
	updateFirst(&list, 5000);
	show(&list);
	printf("�ε��� ��ȣ�� ������ ����\n");
	updateByIdx(&list, 2, 7000);
	show(&list);
	printf("�ε��� ��ȣ�� �˻��ϱ�\n");
	int res;
	select(&list, 2, &res);
	




	return 0;
}