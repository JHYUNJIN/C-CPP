#include<stdio.h>

/*
int main(void) {
	int i, j ;
	for (i = 1; i <= 9; i++) {
		for (j = 1; j <= 9; j++) {
			printf("%d x %d = %d\n", i, j, i * j);
		}
		printf("\n");
	}
	return 0;
}
*/


/*
int main(void) {
	int i = 0;
	while (i < 5) {
		printf("C-Programming\n");
		i++;
	}
}
*/

/*
int main(void) {
	int i=0,sum = 0;
	while (i < 10) {
		sum = sum + i+1;
		i++;
	}
	printf("1부터 10까지의 합은 : %d\n",sum);
}
*/

/*
int main(void) {
	int num = 100;
	while (num == 200) {
		printf("이 문장은 실행이 될까요 ?");
	}
	do {
		printf("이 문장은 실행이 될까요 ?");
	} while (num == 200);

	return 0;
}
*/

/*
int main(void) {

	int a = 0, b = 0, c = 0, d = 0;
	int sum ;

	printf("첫 번째 숫자 입력 : ");
	scanf_s("%d", &a);
	printf("첫 번째 숫자 입력 : ");
	scanf_s("%d", &b);
	printf("첫 번째 숫자 입력 : ");
	scanf_s("%d", &c);
	printf("첫 번째 숫자 입력 : ");
	scanf_s("%d", &d);

	sum = a + b + c + d;

	printf("합은 : %d",sum);

	return 0;
}
*/

/*
int main(void) {
	int arData[4];
	int sum;

	printf("첫번째 정수 입력 : ");
	scanf_s("%d", &arData[0]);
	printf("두번째 정수 입력 : ");
	scanf_s("%d", &arData[1]);
	printf("세번째 정수 입력 : ");
	scanf_s("%d", &arData[2]);
	printf("네번째 정수 입력 : ");
	scanf_s("%d", &arData[3]);

	sum = arData[0] + arData[1] + arData[2] + arData[3];
	printf("합은 : %d", sum);

	return 0;
}
*/

/*
int main(void) {
	int arData[4];
	int sum = 0,i=0;

	for (i = 0; i < 4; i++) {
		printf("%d번째 숫자를 입력해주세요 : ", i + 1);
			scanf_s("%d",&arData[i]);
	}
	//sum = arData[0] + arData[1] + arData[2] + arData[3];
	for (i = 0; i < 4; i++) {
		sum+=arData[i];
	}
	printf("합은 %d\n", sum);
	
	for (i = 0; i < 4; i++) {
		printf("%d\ ", arData[i]);
	}
*/

/*
int main(void){
	int arData[] = { 10,20,30,40,50,60 };
	int count;

	count = sizeof(arData) / sizeof(int);

	printf("arData배열의 개수는 %d입니다.\n",count);

	return 0;
}
*/

/*
int main(void) {

	int a = 100;
	int b = 200;
	printf("변수 a의 주소는 %x입니다.\n", &a);
	printf("변수 b의 주소는 %x입니다.\n", &b);

	int arData[3] = { 1,2,3 };
	int i = 0;
	for (i = 0; i < 3; i++) {
		printf("arData배열의 %d번째 주소는 %d입니다.\n", i, &arData[i]);
	}
	printf("arData배열의 첫번째 인덱스의 주소는 %x입니다.\n", &arData[0]);
	printf("arData배열의 두번째 인덱스의 주소는 %x입니다.\n", &arData[1]);
	printf("arData배열의 세번째 인덱스의 주소는 %x입니다.\n", &arData[2]);

	printf("arData배열의 주소는 &연산자를 사용하지 않아도 주소를 불러올 수 있다.\n");
	printf("arData배열의 첫번째 인덱스의 주소는 %x입니다.\n", arData+1);
	printf("&arData[0]은 %d, arData+0은 %d", &arData[0], arData + 0);

	return 0;
}
*/
int main
int a1 = 10;
char ch1 = 'A';
int* p = 0;
int* num = &a;
*p = &a;
printf(p);







