#include<stdio.h>
#include"myHeader.h" // ����� ���� ��� ���� �߰�

void func(int num) {
	printf("%d\n", num);
}

int main(void) {
	func(10);
}