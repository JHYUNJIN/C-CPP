#include<stdio.h>
//#include<malloc.h> // 동적메모리 사용을 위해 선언해줘야한다.
#include<stdlib.h> // 위 malloc.h와 같다

int main(void) {

/*
	int num[3][4]; // 배열을 정의, 행이 기준

	num[0][0] = 1; num[0][1] = 2; num[0][2] = 3; num[0][3] = 4;
	num[1][0] = 5; num[1][1] = 6; num[1][2] = 7; num[1][3] = 8;
	num[2][0] = 9; num[2][1] = 10; num[2][2] = 11; num[2][3] = 12;

	printf("2차원 배열 num의 출력결과\n");
	printf("%3d %3d %3d %3d\n", num[0][0], num[0][1], num[0][2], num[0][3]);
	printf("%3d %3d %3d %3d\n", num[1][0], num[1][1], num[1][2], num[1][3]);
	printf("%3d %3d %3d %3d\n", num[2][0], num[2][1], num[2][2], num[2][3]);
*/

/*
	int num1[3][4];

	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 4; j++){
			num1[i][j] = i + 1;
		}
	}
	printf(num1);
*/

/*
	int num2[3][4];
	int i, j;
	int val = 1; // 배열에 들어갈 초기값
	for (i = 0; i < 3; i++){
		for (j = 0; j < 4; j++) {
			num2[i][j] = val++;
		}
	}

	printf("2차원 배열 결과 값 출력\n");
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 4; j++) {
			printf("%3d",num[i][j]);
		}
		printf("\n");
	}
*/

/*
	int num[3][4] = {
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12}
	};
	printf("2차원 배열의 출력 결과는\n");
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 4; j++) {
			printf("%3d", num[i][j]);
		}
	}
*/

/*
	int num[3];
	int* p;
	int i, sum = 0;

	for (i = 0; i < 3; i++)	{
		printf("%d번째 숫자 : ", i + 1);
		scanf_s("%d", &num[i]);
	}

	p = num;
	for (i = 0; i < 3; i++) {
		sum += *(p + i);
	}
	printf("합은 : %d\n", sum);

	return 0;
*/

/*
	int num[10000];
	int* p;
	int i, sum=0, count = 0;

	printf("입력할 개수 : ");
	scanf_s("%d\n", &count);

	for (i = 0; i < count; i++)	{
		printf("%d번째 숫자 입력 : ", i + 1);
		scanf_s("%d\n",&num[i]);
	}

	p = num;
	for (i = 0; i < count; i++)	{
		sum += *(p + i);
	}
	printf("합은 : %d\n", sum);
*/

/*
	int* p;
	int i=0, sum = 0;
	int count = 0;

	printf("입력할 개수 : ");
	scanf_s("%d", &count);

	// 동적메모리 선언
	p = (int*)malloc(sizeof(int) * count);


	for (i = 0; i < count; i++)	{
		printf("%d번째 숫자 입력 : ", i + 1);
		scanf_s("%d", p + i);
	}
	for (i = 0; i < count; i++) {
		sum += *(p + i);
	}
	printf("합은 : %d", sum);

	free(p); // malloc으로 동적메모리로 할당해준 메모리를 닫아(해제)준다.
*/

int* p, * s;
int i, j;

printf("malloc() 함수()\n");
p = (int*)malloc(sizeof(int) * 4);

for (i = 0; i < 3; i++){
	printf("메모리에 할당된 곳의 초기값은 p[%d] --> %d\n", i, p[i]);
}
free(p);

printf("calloc() 함수()\n"); // clear all location
s = (int*)calloc(sizeof(int) , 4); // calloc은 자동 초기화되기때문에 0이라고 출력된다.

for (j = 0; j < 3; j++) {
	printf("메모리에 할당된 곳의 초기값은 p[%d] --> %d\n", j, s[j]);
}
free(s);

	return 0;







}