#include<stdio.h>

void main() {
	//printf("if�� ���� ����\n");

	//if (0) { // c���� true false ���� ���� 1��,0�������� �����Ѵ�.
	//	printf("if���� ù��° ����\n");
	//	printf("if���� �ι�° ����\n");
	//}

	//printf("if�� �Ʒ� ����\n");
	// 
	
	// 
	//int num1;
	//printf("���ڸ� �Է����ּ���.");
	//scanf("%d", &num1);

	//if (num1%2 == 0) {
	//	printf("¦���Դϴ�.");
	//}
	//else if(num1%2!=0){
	//	printf("Ȧ���Դϴ�.");
	//}
	//else {
	//	printf("���ڸ� �Է����ּ���");
	//}

	//���� �ϳ��� �Է¹޾Ƽ� 3�� ������� 4�� ������� �˻��ϴ� ���α׷��� ������
	//�Ѵ� �ƴ϶�� 3�� ���, 4�� ����� �ƴմϴ� �� ����ϱ�

	/*int num ;
	printf("���ڸ� �Է����ּ���");
	scanf("%d", &num);

	if (num%3==0&&num%4==0) {
		printf("3�� ����̸鼭 4�� ����Դϴ�.");
	}
	else if (num % 3 == 0) {
		printf("3�� ����Դϴ�.");
	}
	else if (num % 4 == 0) {
		printf("4�� ����Դϴ�.");
	}
	else {
		printf("3�ǹ��, 4�ǹ���� �ƴմϴ�.");
	}*/

	//����ڿ��� Ű�� ���̸� �Է¹ް�
	//10�� �̻�, 160cm �� �� �ϳ��� �̻��̸� ���̱ⱸ ž�� ����
	//�ƴϸ� ž�� �Ұ��� ����ϱ�

	//int age, height;
	//printf("���̸� �Է����ּ���.");
	//scanf("%d", &age);
	//printf("Ű�� �Է����ּ���.");
	//scanf("%d",&height);

	//if (age >= 10 && height >= 160) {
	//	printf("ž�� �����մϴ�.");
	//}
	////else if (age >= 10 || height >= 160) {
	////	printf("ž�� �����մϴ�.");
	////} 
	//else {
	//	printf("ž�� �Ұ����մϴ�.");
	//}

	//int grade;
	//char result;
	//printf("������ �Է����ּ���.");
	//scanf("%d", &grade);
	//if (grade >= 90) {
	//	result = 'A';
	//}
	//else if (grade >= 80) {
	//	result = 'B';
	//}
	//else if (grade >= 70) {
	//	result = 'C';
	//}
	//else if (grade < 70) {
	//	result = 'F';
	//}
	//else {
	//	printf("���ڸ� �Է����ּ���.");
	//}
	//printf("%c�����Դϴ�.",result);
	// 
	
	 
	printf("���ڸ� �Է����ּ���.");
	int num;
	scanf("%d", &num);
	switch (num%2)	{
	case 0:
		printf("¦���Դϴ�.\n");
		break;
	case 1:
		printf("Ȧ���Դϴ�.\n");
		break;
	default:
		printf("���ڸ� �Է����ּ���.\n");
		break;
	}

	//int score;
	//printf("������ �Է����ּ���.");
	//scanf("%d", &score);
	//switch (score/10){
	//	case 9:
	//		printf("A�����Դϴ�.");
	//		break;
	//	case 8:
	//		printf("B�����Դϴ�.");
	//		break;
	//	case 7:
	//		printf("C�����Դϴ�.");
	//		break;
	//	default:
	//		printf("F�����Դϴ�.");
	//		break;
	//}



}