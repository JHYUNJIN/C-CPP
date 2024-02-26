#include<stdio.h>

// ���� �ӿ� ����ִ� ���� ���� �����ϴ� �Լ�
void swap1(int a,int b) {
	int temp = a;
	a = b;
	b = temp;
}

void swap2(int* c, int* d) {
	int temp = *c;
	*c = *d;
	*d = temp;
}

void change1(int temp) {
	temp = 555;
}

void change2(int* temp) {
	*temp = 555;
}



void main() {
	printf("----------Call By Value----------\n");
	
	int a = 10;
	int b = 20;
	printf("���� �� a : %d\t b : %d\n", a, b);
	swap1(a, b);
	printf("���� �� a : %d\t b : %d\n", a, b);

	int data1 = 22;
	printf("���� �� data1 : %d\n", data1);
	change1(data1);
	printf("���� �� data1 : %d\n", data1);


	printf("----------Call By Reference----------\n");
	int c = 100;
	int d = 200;
	printf("���� �� c : %d\t d : %d\n", c, d);
	swap2(&c, &d);
	printf("���� �� c : %d\t d : %d\n", c	, d);

	int data2 = 22;
	printf("���� �� data2 : %d\n", data2);
	change2(&data2);
	printf("���� �� data2 : %d\n", data2);


}