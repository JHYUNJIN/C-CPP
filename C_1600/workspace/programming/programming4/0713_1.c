#include<stdio.h>

void main() {
	/* ���� �� ���� �Է¹޾� 
		�Ҽ��� �Ʒ� �� �ڸ����� ����� ����ϱ�
	*/
	
	//int num1, num2, num3;
	//printf("ù��° ���ڸ� �Է����ּ���.");
	//scanf("%d", &num1);
	//printf("�ι�° ���ڸ� �Է����ּ���.");
	//scanf("%d", &num2);
	//printf("����° ���ڸ� �Է����ּ���.");
	//scanf("%d", &num3);
	//double avg = (num1 + num2 + num3) / 3.0; // double �������� �ٲ��ְ� ��ƾ��Ѵ�. �׷��� 3.0���� ������ ���ִ°��̴�.

	//printf("��������� %.2lf �Դϴ�.", avg);
	
/*	int num1 = 20, num2 = 30;
	printf("num1 > num2 : %d\n", num1 > num2);
	int num = 55;
	printf("%d\n",num > 50 && num < 100);
	printf("%d\n", 10 && -5);
	printf("%d\n", 10 && 0);
	printf("%d\n", 10 || -5);
	printf("%d\n", 10 || 0);
	printf("%d\n", !0);
	printf("%d\n", !10)*/;

	//printf("\n===���׿�����===\n");
	////	���ǽ� ?	���� �� �� : ������ �� �� 
	//printf("%d\n", -5 ? 10 : 20);

	//int result = -5 ? 10 : 20;
	//printf("%d\n", result);


	// ���ڿ� 10���� ����� ����.
	//����� ������ �Է� �޾Ƽ� ��� ���ڰ� �ʿ����� ����϶�.

	//�Է¿��� : 15
	//��¿��� : 2���ڰ� �ʿ��մϴ�


	int lamen, result1;
	printf("����� ������ �Է��ϼ���.");
	scanf("%d", &lamen);
	int box = (lamen / 10);
	lamen % 10 == 0 ? printf("%d�ڽ��� �ʿ��մϴ�.", box - 1) : lamen > 10 ? printf("%d�ڽ��� �ʿ��մϴ�.",box )
		: lamen<10 ? printf("�ڽ��� �ʿ�����ϴ�."): printf("�𸣰ڴ�.)");

	int result1 = lamen == 10 ? box : lamen > 10 ? box + 1 : 1;
	printf("%d�ڽ��� �ʿ��մϴ�.", result1);


	//printf("%d ���ڰ� �ʿ��մϴ�.", box);

	// �� ������ �Է¹޾Ƽ� �� ���� �� (ū �� - ���� ��)�� ���ϱ�
	// �Է¿��� : 10 20
	// ��� ���� : 10

	int num1, num2, result2;
	printf(" ���� 2���� �Է����ּ���");
	scanf(" %d%d", &num1, & num2);
	result2 = num1 > num2 ? num1 - num2 : num2 - num1;
	printf("�� ���� ���� %d �Դϴ�.", result2);

//#include <stdio.h>
//
//	void main() {
		// ���ڿ� 10���� ����� ����.
		// ����� ������ �Է� �޾Ƽ�, �� ���� ���ڰ� �ʿ����� ����غ���!

		// �Է� ���� : 15
		// ��� ���� : 2���ڰ� �ʿ��մϴ�.

		// �Է� ���� : 20
		// ��� ���� : 2���ڰ� �ʿ��մϴ�.
		//int ramen;
		//printf("��� ���� �Է� >> ");
		//scanf_s("%d", &ramen);

		//int box = ramen % 10 != 0 ? ramen / 10 + 1 : ramen / 10;
		//printf("�ʿ��� ���ڴ� %d�� �Դϴ�.", box);


		// �� ������ �Է� �޾Ƽ� �� ���� �� (ū�� - ���� ��)�� ���ϱ�
		// 
		// �Է� ���� : 10    20
		// ��� ���� : 10

		// �Է� ���� : 35    10
		// ��� ���� : 25
		/*int number1, number2, result;
		printf("���̸� �˰� ���� �� ���� �Է� >> ");
		scanf_s("%d%d", &number1, &number2);
		result = number1 > number2 ? number1 - number2 : number2 - number1;
		printf("%d", result);*/

		// ����
		// number1 �� �� ũ�� 1
		// number2 �� �� ũ�� 2
		// �� ���� ������ 0 ���
		/*int number1, number2, result;
		scanf_s("%d%d", &number1, &number2);
		result = number1 > number2 ? 1 : number1 < number2 ? 2 : 0;
		printf("%d", result);*/

	}

	
}