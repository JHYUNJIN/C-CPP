#include<stdio.h>
#include<stdlib.h>
#define MAX 5
#define _CRT_SECURE_NO_WARNINGS

typedef struct {
	int ar[MAX];
	int length;
}ArrayList;

//구조체 멤버변수는 정의와 동시에 초기화가 불가능하기 때문에
// 초기화 할 수 있는 함수를 정의하자
void init(ArrayList* list) {
	list->length = 0;
}

//리스트의 요소를 확인하는 함수
void show(ArrayList* list) {
	if (list->length==0){
		printf("현재 예약된 인원이 없습니다.\n");
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


//추가
// 맨 뒤에 추가
int append(ArrayList* list, int element) {
	if (isFull(list)){
		return 0; // 함수 종료를 의미하기도 한다.
	}
	// length는 index보다 1 더 크다.
	list->ar[list->length++]=element;
	return 1;
}

//삽입
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

//삭제
//인덱스 번호로 삭제하기
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


//요소로 삭제하기
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

//같은 요소 모두 삭제하기
void removeElements(ArrayList* list, int element) {
	while (removeElement(list, element));
}

//수정
//인덱스 번호로 수정하기
int updateByIdx(ArrayList* list,int index,int element) {
	if (index >= list->length)	{ // 방어 코드
		return 0;
	}
	list->ar[index] = element;
	return 1;
}

//요소 값으로 수정하기
//data = 기존 값
//update_data = 변경할 값
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

// 예약 시스템 실습 함수

// 내 앞에 몇명의 대기자가 있는지 구하는 함수
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
	//printf("1번째방에 들어 있는 값 %d\n",select(&list, 1));





	// 예약 서비스 프로그램 제작 실습
	int choice;
	int phone;
	ArrayList user;
	ArrayList* userPtr = &user;
	init(userPtr);



	while (1) {
		printf("=====예약 정보 시스템=====\n");
		printf("1. 현재 예약 정보 확인하기\n");
		printf("2. 예약하기\n");
		printf("3. 예약 취소하기\n");
		printf("4. 내 예약정보 찾기\n");
		printf("메뉴를 선택해주세요.\n");
		scanf_s("%d", &choice);

		if (choice == 5) {
			printf("프로그램을 종료합니다.");
			break;
		}
		else if (choice == 1) {
			show(userPtr);
		}
		else if (choice == 2) {
			if (isFull(userPtr)) {
				printf("현재 예약 인원이 가득 찼습니다.");
				continue;
			}
			printf("휴대폰 번호 뒤 네자리를 입력해주세요.");
			scanf_s("%d", &phone);
			append(userPtr, phone);
			printf("예약되었습니다. 회원님의 대기 번호는 %d번 입니다.\n", userPtr->length);
		}
		else if (choice == 3) {
			printf("예약취소할 휴대폰 번호 뒤 네자리를 입력해주세요.");
			scanf_s("%d", &phone);
			if (removeElement(userPtr, phone)) {
				printf("예약이 취소되었습니다.\n");
			}
			else {
				printf("해당 번호가 존재하지 않습니다.\n");
			}
		}
		else if (choice == 4) {
			printf("휴대폰 번호를 입력해주세요.");
			scanf_s("%d", &phone);
			if (indexOf(userPtr, phone) == -1) {
				printf("해당 번호는 조회가 되지 않습니다.\n");
				continue;
			}
			printf("예약번호  %d\n", phone);
			printf("%d팀이 먼저 기다리고 있습니다.\n", indexOf(userPtr, phone));
		}
		else {
			printf("다시 입력해주세요.\n");
		}
	}


	return 0;
}