#include<stdio.h>
/*
int main(void) {
	int num = 99;

	if(num > 100) {
		printf("���Դϴ�.\n");
	}
	else {
		printf("�����Դϴ�.");
	}
	return 0;
}
*/

/*
// ����ڰ� ���� ������ �Է��Ͽ� �Է��� ������ ¦������ Ȧ������ ����ϴ� �Լ�
int main(void) {
	int num = 0; // ������ ������ �����ϰ� int 0���� �ʱ�ȭ ��
	printf("���ڸ� �Է����ּ��� : ");
	scanf("%d", &num);
	
	if (num % 2 == 0) {
		printf("¦���Դϴ�.");

	}
	else {
		printf("Ȧ���Դϴ�.");
		
	}
	return 0;
}
*/

/*
int main(void) {
	int num = 0;
	printf("������ �Է����ּ��� : ");
	scanf("%d", &num);
	if (num >= 90) {
		printf("A");
	}
	else if (num >= 80) {
		printf("B");
	}
	else if (num >= 70) {
		printf("C");
	}
	else if (num >= 60) {
		printf("D");
	}
	else {
		printf("F");
	}
return 0;
}
*/


/*
// �ܼ� if���� �̿��Ͽ� �� ���� + - * / �� ���ϴ� �ҽ��� �ڵ��Ͻÿ�.
// ��, ����ڰ� ���� �Է��ϰ� �Ѵ�.
// ��� ��) ù��° ���ڸ� �Է��ϼ���. : 10
//          ����� ������(+ - * /)�� �Է��� �ּ��� : *
//          �ι�° ������ �Է��� �ּ��� : 2
//           10 * 2 = 20�Դϴ�.

int main(void) {
	int num1=0,num2=0;
	int total = num1 * num2;
	char ch = ' ';

	printf("ù��° ���ڸ� �Է��ϼ��� : ");
	scanf("%d", &num1);
	printf("����� �����ڸ� �Է��ϼ��� : ");
	scanf(" %c", &ch);
	printf("�ι�° ���ڸ� �Է��ϼ��� : ");
	scanf("%d", &num2);
	if (ch=='+') {
		printf("%d+%d=%d�Դϴ�.",num1, num2,num1+num2);
	}
	if (ch == '-') {
		printf("%d-%d=%d�Դϴ�.", num1, num2, num1 - num2);
	}
	if (ch == '*') {
		printf("%d*%d=%d�Դϴ�.", num1, num2, num1 * num2);
	}
	if (ch == '/') {
		printf("%d/%d=%d�Դϴ�.", num1, num2, num1 / num2);
	}

return 0;
}
*/

/* switch
int main(void) {
	int num = 0;
	
	printf("1������ 4�� �� �ϳ��� �����Ͻÿ�.");
	scanf("%d", &num);

	switch (num){
	case 1:
		printf("1���� �����Ͽ����ϴ�.\n");
		break;
	case 2:
		printf("2���� �����Ͽ����ϴ�.\n");
		break;
	case 3:
		printf("3���� �����Ͽ����ϴ�.\n");
		break;
	case 4:
		printf("4���� �����Ͽ����ϴ�.\n");
		break;

	default:
		printf("�߸�������>.-");
	}
	return 0;
}
*/

/*
int main(void) {
	int i = 0;
	for (i = 0; i < 5; i++){
		printf("C-Programming\n");
	}
	for (i = 5; i > 0; i--){
		printf("%d��° �ݺ� C-Programming\n",i);
	}
	return 0;
}
*/

// �̿ϼ� for��
/*
int main(void) {
	int sum = 0;

	int i = 0;
	for (i = 0; i < 10; i++) {
		if (i == 0) {
			printf("1����2������ �պ��� ����ϰڽ��ϴ�.\n");
		}
		else {
		sum += i+1;
		printf("%d���� %d������ ���� : %d\n",1,i+1, sum);
		}
	}

	return 0;
}
*/

/*
int main(void) {
	int sum = 0;
	int i = 0;
	for (i = 500; i < 1000; i += 2) {
		sum = sum +1 + i;
	}

	printf("500���� 1000���� Ȧ���� ���� : %d", sum);

	return 0;
}
*/

/*
int main(void) {
	int sum = 0;
	int i = 0, num = 0;

	printf("���� �Է��ϼ��� : ");
		scanf("%d", &num);

		for (i = 0; i < num; i++) {
			sum = sum+1+ i;
		}
		printf("1���� %d������ ���� : %d�Դϴ�.\n", num, sum);
		return 0;
}
*/

int main(void) {
	int i = 0;
	int dan = 0;
	printf("���ϴ� �������� �Է��ϼ��� : ");
		scanf("%d", &dan);

		for (i = 1; i <= 9; i++) {
			
			printf("%d x %d=%d\n", dan, i, dan * i);
		}
		return 0;
}























