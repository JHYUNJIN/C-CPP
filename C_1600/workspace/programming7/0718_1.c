#include<stdio.h>

void main() {

	//int i = 0;
	//while (i < 3) {
	//	printf("while�� �� ����\n");
	//	i++;
	//}
	//printf("while�� �� ����");

	//while (1)
	//{
	//	int choice;
	//	printf("1. �ܹ��� 2. ����Ƣ�� 3. ����\n");
	//	scanf_s("%d", &choice);
	//	if (choice == 3) {
	//		goto a; // goto ����� Ȱ���Ͽ� Ư���������� �̵���ų �� �ִ�.
	//		//break; 
	//	}
	//}
	//a:
	//printf("��������");

	//int choice =0;

	//while (choice!=0){
	//	printf("1. �ܹ��� 2. ����Ƣ�� 3. ����\n");
	//	scanf_s("%d", &choice);
	//}

	int choice = 0;
	do {
		printf("1. �ܹ��� 2. ����Ƣ�� 3. ����\n");
		scanf_s("%d", &choice);
	} while (choice != 0);







}//main