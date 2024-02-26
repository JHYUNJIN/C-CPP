#include<stdio.h>


int multiple7(int num) {

	int count=0;
	for (int i = num; i <=num+200; i++){
		if (i%7==0) {
			count++;
		}
	}
	return count;

}

int main() {


	//int ar[] = { 1,2,3 };
	//printf("ar : %p\n", ar);

	//int num1 = 0;
	//int num2 = 100;

	//int* ptr = &num1;
	//printf("ptr : %p\n", ptr);
	//
	//ptr = &num2;
	//printf("ptr : %p\n", ptr);

	//ptr = ar;
	//printf("ptr : %d\n", *(ptr + 2));

	//// 배열형태의
	int num,result;
	printf("정수를 입력하세요 : ");
	scanf_s("%d", &num);
	result = multiple7(num);
	printf("%d", result);

	return 0;
}