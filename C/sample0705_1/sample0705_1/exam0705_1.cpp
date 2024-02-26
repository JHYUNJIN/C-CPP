#include<stdio.h>

int add(int num1, int num2) {
	return num1 + num2;
}

void showAddResult(int num) {
	printf("결과는 : %d입니다.\n", num);
}

int readNum(void) {
	int num;
	scanf_s("%d", &num);
	return num;
}

void thisProgram(void) {
	printf("==두 정수를 입력하여 더하는 프로그램==\n");
}


int main(void) {
	int result, num1, num2;
	thisProgram();
	printf("첫번째 숫자을 입력해주세요.");
	num1 = readNum();
	printf("두번째 숫자를 입력해주세요.");
	num2 = readNum();
	result = add(num1,num2);
	showAddResult(result);
	



	return 0;
}