#include<stdio.h>

int simpleFuncOne(void) {
	int num = 10;
	num++;
	printf("함수의 num은 : %d\n", num);
	return 0;
}

int simpleFuncTwo(void) {
	int num1 = 20;
	int num2 = 30;
	num1++, num2--;
	printf("num1, num2 : %d %d\n", num1, num2);
	return 0;
}

int main(void) {
	int num = 17;
	simpleFuncOne();  //11
	simpleFuncTwo();  // 21 29
	printf("메인 함수의 num은 : %d\n", num); // 17
	return 0;
}