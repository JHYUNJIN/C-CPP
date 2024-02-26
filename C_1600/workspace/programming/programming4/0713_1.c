#include<stdio.h>

void main() {
	/* 정수 세 개를 입력받아 
		소수점 아래 두 자리까지 평균을 출력하기
	*/
	
	//int num1, num2, num3;
	//printf("첫번째 숫자를 입력해주세요.");
	//scanf("%d", &num1);
	//printf("두번째 숫자를 입력해주세요.");
	//scanf("%d", &num2);
	//printf("세번째 숫자를 입력해주세요.");
	//scanf("%d", &num3);
	//double avg = (num1 + num2 + num3) / 3.0; // double 형식으로 바꿔주고 담아야한다. 그래서 3.0으로 연산을 해주는것이다.

	//printf("평균점수는 %.2lf 입니다.", avg);
	
/*	int num1 = 20, num2 = 30;
	printf("num1 > num2 : %d\n", num1 > num2);
	int num = 55;
	printf("%d\n",num > 50 && num < 100);
	printf("%d\n", 10 && -5);
	printf("%d\n", 10 && 0);
	printf("%d\n", 10 || -5);
	printf("%d\n", 10 || 0);
	printf("%d\n", !0);
	printf("%d\n", !10)*/;

	//printf("\n===삼항연산자===\n");
	////	조건식 ?	참일 때 값 : 거짓일 때 값 
	//printf("%d\n", -5 ? 10 : 20);

	//int result = -5 ? 10 : 20;
	//printf("%d\n", result);


	// 상자에 10개의 라면이 들어간다.
	//라면의 갯수를 입력 받아서 몇개의 상자가 필요한지 출력하라.

	//입력예시 : 15
	//출력예시 : 2상자가 필요합니다


	int lamen, result1;
	printf("라면의 개수를 입력하세요.");
	scanf("%d", &lamen);
	int box = (lamen / 10);
	lamen % 10 == 0 ? printf("%d박스가 필요합니다.", box - 1) : lamen > 10 ? printf("%d박스가 필요합니다.",box )
		: lamen<10 ? printf("박스가 필요없습니다."): printf("모르겠다.)");

	int result1 = lamen == 10 ? box : lamen > 10 ? box + 1 : 1;
	printf("%d박스가 필요합니다.", result1);


	//printf("%d 상자가 필요합니다.", box);

	// 두 정수를 입력받아서 두 수의 차 (큰 수 - 작은 수)를 구하기
	// 입력예시 : 10 20
	// 출력 에시 : 10

	int num1, num2, result2;
	printf(" 숫자 2개를 입력해주세요");
	scanf(" %d%d", &num1, & num2);
	result2 = num1 > num2 ? num1 - num2 : num2 - num1;
	printf("두 수의 차는 %d 입니다.", result2);

//#include <stdio.h>
//
//	void main() {
		// 상자에 10개의 라면이 들어간다.
		// 라면의 갯수를 입력 받아서, 몇 개의 상자가 필요한지 출력해보자!

		// 입력 예시 : 15
		// 출력 예시 : 2상자가 필요합니다.

		// 입력 예시 : 20
		// 출력 예시 : 2상자가 필요합니다.
		//int ramen;
		//printf("라면 갯수 입력 >> ");
		//scanf_s("%d", &ramen);

		//int box = ramen % 10 != 0 ? ramen / 10 + 1 : ramen / 10;
		//printf("필요한 상자는 %d개 입니다.", box);


		// 두 정수를 입력 받아서 두 수의 차 (큰수 - 작은 수)를 구하기
		// 
		// 입력 예시 : 10    20
		// 출력 예시 : 10

		// 입력 예시 : 35    10
		// 출력 예시 : 25
		/*int number1, number2, result;
		printf("차이를 알고 싶은 두 수를 입력 >> ");
		scanf_s("%d%d", &number1, &number2);
		result = number1 > number2 ? number1 - number2 : number2 - number1;
		printf("%d", result);*/

		// 참고
		// number1 이 더 크면 1
		// number2 가 더 크면 2
		// 두 수가 같으면 0 출력
		/*int number1, number2, result;
		scanf_s("%d%d", &number1, &number2);
		result = number1 > number2 ? 1 : number1 < number2 ? 2 : 0;
		printf("%d", result);*/

	}

	
}