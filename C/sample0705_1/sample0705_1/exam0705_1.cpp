#include<stdio.h>

int add(int num1, int num2) {
	return num1 + num2;
}

void showAddResult(int num) {
	printf("����� : %d�Դϴ�.\n", num);
}

int readNum(void) {
	int num;
	scanf_s("%d", &num);
	return num;
}

void thisProgram(void) {
	printf("==�� ������ �Է��Ͽ� ���ϴ� ���α׷�==\n");
}


int main(void) {
	int result, num1, num2;
	thisProgram();
	printf("ù��° ������ �Է����ּ���.");
	num1 = readNum();
	printf("�ι�° ���ڸ� �Է����ּ���.");
	num2 = readNum();
	result = add(num1,num2);
	showAddResult(result);
	



	return 0;
}