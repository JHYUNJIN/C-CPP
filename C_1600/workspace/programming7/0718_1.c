#include<stdio.h>

void main() {

	//int i = 0;
	//while (i < 3) {
	//	printf("while문 안 문장\n");
	//	i++;
	//}
	//printf("while문 밖 문장");

	//while (1)
	//{
	//	int choice;
	//	printf("1. 햄버거 2. 감자튀김 3. 종료\n");
	//	scanf_s("%d", &choice);
	//	if (choice == 3) {
	//		goto a; // goto 제어문을 활용하여 특정영역으로 이동시킬 수 있다.
	//		//break; 
	//	}
	//}
	//a:
	//printf("영업종료");

	//int choice =0;

	//while (choice!=0){
	//	printf("1. 햄버거 2. 감자튀김 3. 종료\n");
	//	scanf_s("%d", &choice);
	//}

	int choice = 0;
	do {
		printf("1. 햄버거 2. 감자튀김 3. 종료\n");
		scanf_s("%d", &choice);
	} while (choice != 0);







}//main