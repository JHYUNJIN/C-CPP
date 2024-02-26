#include<stdio.h>
#include<stdlib.h>
#define MAX 5
#define _CRT_SECURE_NO_WARNINGS

typedef struct {
	int ar[MAX];
	int length;
}ArrayList;

//����ü ��������� ���ǿ� ���ÿ� �ʱ�ȭ�� �Ұ����ϱ� ������
// �ʱ�ȭ �� �� �ִ� �Լ��� ��������
void init(ArrayList* list) {
	list->length = 0;
}

//����Ʈ�� ��Ҹ� Ȯ���ϴ� �Լ�
void show(ArrayList* list) {
	if (list->length==0){
		printf("���� ����� �ο��� �����ϴ�.\n");
	}
	for (int i = 0; i < list->length; i++){
		printf("[%d]", list->ar[i]);
	}
	printf("\n");
}

int isFull(ArrayList* list) {
	if (list->length >= MAX) {
		return 1;
	}
	return 0;
}


//�߰�
// �� �ڿ� �߰�
int append(ArrayList* list, int element) {
	if (isFull(list)){
		return 0; // �Լ� ���Ḧ �ǹ��ϱ⵵ �Ѵ�.
	}
	// length�� index���� 1 �� ũ��.
	list->ar[list->length++]=element;
	return 1;
}

//����
int insert(ArrayList* list,int index, int element) {
	if (isFull(list) || index >= list->length) {
		return 0;
	}
	for (int i = list->length; i > index; i--)	{
		list->ar[i] = list->ar[i - 1];
	}
	list->ar[index] = element;
	list->length++;
	return 1;
}

//����
//�ε��� ��ȣ�� �����ϱ�
int removeByIdx(ArrayList* list, int index) {
	if (index >= list->length) {
		return 0;
	}
	for (int i = index; i < list->length; i++)	{
		list->ar[i] = list->ar[i+1];
	}
	list->length--;
	return 1;


}


//��ҷ� �����ϱ�
int removeElement(ArrayList* list, int element) {
	int index = 0;
	int flag = 0;
	for (int i = 0; i < list->length; i++)	{
		if (list->ar[i] == element) {
			flag = 1;
			index = i;
			break;
		}
	}
	if (flag) {
		removeByIdx(list, index);
	}
	return flag;
}

//���� ��� ��� �����ϱ�
void removeElements(ArrayList* list, int element) {
	while (removeElement(list, element));
}

//����
//�ε��� ��ȣ�� �����ϱ�
int updateByIdx(ArrayList* list,int index,int element) {
	if (index >= list->length)	{ // ��� �ڵ�
		return 0;
	}
	list->ar[index] = element;
	return 1;
}

//��� ������ �����ϱ�
//data = ���� ��
//update_data = ������ ��
void updateByElement(ArrayList* list, int data, int update_data) {
	int index = 0;
	for (int i = 0; i < list->length; i++){
		if (list->ar[i] == data) {
			index = 1;
			break;
		}
	}
	updateByIdx(list, index, update_data);
}

int select(ArrayList* list, int index) {
	if (index >= list->length || index<0) {
		return 0;
	}
	return list->ar[index];
}

// ���� �ý��� �ǽ� �Լ�

// �� �տ� ����� ����ڰ� �ִ��� ���ϴ� �Լ�
int indexOf(ArrayList* list, int element){
	for (int i = 0; i < list->length; i++)	{
		if (list->ar[i] == element) {
			return i;
		}
	}
	return -1;
}




int main() {

	//ArrayList list;
	//list.length = 0;
	//printf("length :%d\n", list.length);
	//init(&list);
	//printf("length :%d\n", list.length);

	//append(&list, 10);
	//append(&list, 20);
	//append(&list, 30);
	//insert(&list, 5,1);
	//removeByIdx(&list, 1);
	//updateByIdx(&list, 5, 0);
	//updateByIdx(&list, 5, 1);
	//show(&list);
	//removeByIdx(&list, 2);
	//show(&list);
	//updateByElement(&list, 5, 50);
	//append(&list, 10);
	//append(&list, 20);
	//show(&list);
	//removeElements(&list, 10);
	//show(&list);
	//printf("1��°�濡 ��� �ִ� �� %d\n",select(&list, 1));





	// ���� ���� ���α׷� ���� �ǽ�
	int choice;
	int phone;
	ArrayList user;
	ArrayList* userPtr = &user;
	init(userPtr);



	while (1) {
		printf("=====���� ���� �ý���=====\n");
		printf("1. ���� ���� ���� Ȯ���ϱ�\n");
		printf("2. �����ϱ�\n");
		printf("3. ���� ����ϱ�\n");
		printf("4. �� �������� ã��\n");
		printf("�޴��� �������ּ���.\n");
		scanf_s("%d", &choice);

		if (choice == 5) {
			printf("���α׷��� �����մϴ�.");
			break;
		}
		else if (choice == 1) {
			show(userPtr);
		}
		else if (choice == 2) {
			if (isFull(userPtr)) {
				printf("���� ���� �ο��� ���� á���ϴ�.");
				continue;
			}
			printf("�޴��� ��ȣ �� ���ڸ��� �Է����ּ���.");
			scanf_s("%d", &phone);
			append(userPtr, phone);
			printf("����Ǿ����ϴ�. ȸ������ ��� ��ȣ�� %d�� �Դϴ�.\n", userPtr->length);
		}
		else if (choice == 3) {
			printf("��������� �޴��� ��ȣ �� ���ڸ��� �Է����ּ���.");
			scanf_s("%d", &phone);
			if (removeElement(userPtr, phone)) {
				printf("������ ��ҵǾ����ϴ�.\n");
			}
			else {
				printf("�ش� ��ȣ�� �������� �ʽ��ϴ�.\n");
			}
		}
		else if (choice == 4) {
			printf("�޴��� ��ȣ�� �Է����ּ���.");
			scanf_s("%d", &phone);
			if (indexOf(userPtr, phone) == -1) {
				printf("�ش� ��ȣ�� ��ȸ�� ���� �ʽ��ϴ�.\n");
				continue;
			}
			printf("�����ȣ  %d\n", phone);
			printf("%d���� ���� ��ٸ��� �ֽ��ϴ�.\n", indexOf(userPtr, phone));
		}
		else {
			printf("�ٽ� �Է����ּ���.\n");
		}
	}


	return 0;
}