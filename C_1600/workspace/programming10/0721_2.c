#include<stdio.h>

int global;
void f() {
	// ����ƽ ����
	//��밡���� ������ ���������� ����������
	// �޸𸮿����� ������ ���α׷��� ����� ���Ŀ� �����ȴ�.
	static int a = 0;
	int b = 0;
	a++;
	b++;
	printf("a : %d\tb : %d\n", a, b);
}

void f2() {
	printf("�������� global : %d\n", global);
}
void f3(int num) {
	//num = 100;
	printf("�������� global : %d\n", global);
	printf("�Ű����� num : %d\n", num);
}


void main() {

	f();
	f();
	printf("\n");
	f2();
	printf("\n");
	global = 500;
	printf("\n");
	printf("�������� global : %d\n", global);

	printf("\n");

	int num = 10;
	f3(200);
	printf("main ������ num�� �� : %d\n", num);


}