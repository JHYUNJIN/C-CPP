#include<stdio.h>

int num; // ��������(�ڵ� �ʱ�ȭ int�� 0���� �ʱ�ȭ�ȴ�.)

void add(int val) {
	num += val;
}

int main(void) {

	printf("num : %d\n", num); // 0

	add(3);
	printf("num : %d\n", num); // 3
	
	num++;
	printf("num : %d\n", num); // 4

	int num = 0;
	printf("num : %d\n", num); // 0

	add(3);
	printf("num : %d\n", num); // 3

	num++;
	printf("num : %d\n", num); // 4

	return 0;
}