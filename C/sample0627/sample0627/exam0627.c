#include<stdio.h>
	/*
	int main(void) {

		int num1=0, num2=0; // ������ ����Ǵ� ���ÿ� �޸�(�ּ�)�� �Ҵ�
		int result=0; // ������� ���� �� �ִ� ���� ����

		num1 = 10;
		num2 = 0;

		result = num1 + num2;
		printf("%d+%d=%d\n", num1, num2, result);

		result = num1 - num2;
		printf("���� %d���� %d�� ���� ����� %d�Դϴ�.", num1, num2, result);

		result = num1 / num2;
		printf("���� %d���� %d�� ������ ����� %d�Դϴ�.", num1, num2, result);

	return 0;
	}
	*/

/*
	int main(void) {
		int num1=0, num2 = 0;
		int result = 0;

		printf("���ڸ� �Է����ּ��� : ");
		scanf("%d", &num1);

		printf("���ڸ� �Է����ּ��� : ");
		scanf("%d", &num2);
		// & �� �ּҸ� �˾Ƴ��� Ű�����̴�.

		result = num1 + num2;
		printf(" % d + % d = % d", num1, num2, result);
	
		return 0;
		}
*/

/*
int main(void) {
	printf("%d\n", 123);
	printf("%5d\n", 123);
	printf("%05d\n", 123);

	printf("%f\n", 123.45);
	printf("%7.1f\n", 123.45);

	return 0;
	}
*/

/*
int main(void) {
	int a=0, b = 0, c = 0;

	b = 5;
	c = 3;

	a = b + c;
	printf("%d+%d=%d\n", b, c, a);

	a = b / c;
	printf("%d/%d=%d\n", b, c, a);

	a = b & c;
	printf("%d%%%d=%d", b, c, a);
}
*/

/*
int main(void) {
	int a = 0;

	a++; // a=a+1
	printf("a++=%d\n", a); 
	a--;
	printf("a--=%d\n", a);

	return 0;
	}
*/


int main(void) {
	int a = 10, b=0;
	b = a++;  // --> b=a ++ 
	printf("%d\n", b);

	b = ++a; // --> ++a = b
	printf("%d\n", b);

	return 0;
}


/*
int main(void) {
	int a = 100, b = 200;
	printf("%d==%d�� %d�̴�.\n", a, b, a == b); // ���� 0
	printf("%d!=%d�� %d�̴�.\n", a, b, a != b); // �� 1
}
*/

/*
int main(void) {
	int a = 99;

	printf("AND ���� : %d\n", (a >= 100) && (a <= 200)); // 0
	printf("OR ���� : %d\n", (a >= 100) || (a <= 200)); // 1
	printf("OR ���� : %d\n", !(a == 100)); // 1
}
*/



