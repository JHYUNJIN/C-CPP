#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void main() {
	//int num;
	//printf("num�� �ּҰ��� %p\n", &num);

	//int num1;
	//int num2;


	//printf("ù��° ���ڸ� �Է����ּ���.\n");
	//scanf("%d", &num1);
	//printf("�ι�° ���ڸ� �Է����ּ���.\n");
	//scanf("%d", &num2);

	//printf("num1�� ���ִ� �� : %d\n", num1);
	//printf("num2�� ���ִ� �� : %d\n", num2);

	////��¥�� �Է¹޾� ����ϴ� ���α׷�
	//int month;
	//int date;
	//printf("�̹����� �� �� �ΰ��� ? ");
	//scanf("%d", &month);
	//printf("������ �� �� �ΰ��� ? ");
	//scanf("%d", &date);

	//printf("������ %d�� %d�� �Դϴ�.\n", month, date);

	//int num = 3.14;
	//printf("%d\n", num);
	//num = (double)100;
	//printf("%lf\n", num);
	//num = (char)97;
	//printf("%c\n", num);

	//printf("%d\n", 10 + 3);
	//printf("%d\n",10 + 'a');
	//printf("%c\n",10 + 'a');
	//printf("%d\n", 5 / 2);
	//printf("%lf\n", 5 / 2.0);
	//printf("%.2lf\n", 'a'- 2.0);
	//printf("%c\n", 'ab'-'b');

	//print("%d\n", 5 / 0); // 0���δ� ���� �� ����.



	/* ������ �Է� �޾Ƽ� �ش� ������ ���� �ڸ��� ���� �ڸ� ����ϱ�
	* 
	* �Է� ���� : 10
	* 
	* ��� ���� 
	*		���� �ڸ� : 1
	*		���� �ڸ� : 0
	*/

	//int num = 0;
	//printf("���ڸ� �Է����ּ���.");
	//scanf_s("%d", &num);

	//printf("�ش� ������ ���� �ڸ� ���� %d �Դϴ�.\n",num/10);
	//printf("�ش� ������ ���� �ڸ� ���� %d �Դϴ�.\n",num%10);

	/* �뷡 �Ѱ�� 300���� ���� �뷡�濡��
	* ����ڿ��� �ݾ��� �Է¹ް� , �θ� �� �ִ� �뷡�� �ܵ� ����ϱ�
	* �Է� ���� : �ݾ��Է� >> 1600
	* ��� ���� : �θ� �� �ִ� �뷡�� 5���̸�, �ܵ��� 100�� �Դϴ�.
	*/
	int money = 0;
	int sing = 300;
	printf("�ݾ� �Է� >> ");
	scanf_s("%d", &money);

	printf("�θ� �� �ִ� �뷡�� %d�� �̸�, �ܵ��� %d�� �Դϴ�.\n", money / sing, money % sing);


	/*����ڿ��� ���� �ҹ��ڸ� �Է¹޾Ƽ�
	* �ش� �ҹ��ڸ� �빮�ڷ� �ٲپ� ����ϱ�
	* �Է¿��� : a
	* ��¿��� : A
	*/

	char alphabet = NULL;
	printf("�ҹ��� ���ĺ��� �Է����ּ���.");
	scanf_s(" %c", &alphabet);

	printf("�빮�� ���ĺ� %c�� ��µǾ����ϴ�.", (alphabet - 32));









}