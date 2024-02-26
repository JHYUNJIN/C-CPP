#include<stdio.h>

int num; // 전역변수(자동 초기화 int는 0으로 초기화된다.)

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