#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void main() {
	//int num;
	//printf("num의 주소값은 %p\n", &num);

	//int num1;
	//int num2;


	//printf("첫번째 숫자를 입력해주세요.\n");
	//scanf("%d", &num1);
	//printf("두번째 숫자를 입력해주세요.\n");
	//scanf("%d", &num2);

	//printf("num1에 들어가있는 값 : %d\n", num1);
	//printf("num2에 들어가있는 값 : %d\n", num2);

	////날짜를 입력받아 출력하는 프로그램
	//int month;
	//int date;
	//printf("이번달은 몇 월 인가요 ? ");
	//scanf("%d", &month);
	//printf("오늘은 몇 일 인가요 ? ");
	//scanf("%d", &date);

	//printf("오늘은 %d월 %d일 입니다.\n", month, date);

	//int num = 3.14;
	//printf("%d\n", num);
	//num = (double)100;
	//printf("%lf\n", num);
	//num = (char)97;
	//printf("%c\n", num);

	//printf("%d\n", 10 + 3);
	//printf("%d\n",10 + 'a');
	//printf("%c\n",10 + 'a');
	//printf("%d\n", 5 / 2);
	//printf("%lf\n", 5 / 2.0);
	//printf("%.2lf\n", 'a'- 2.0);
	//printf("%c\n", 'ab'-'b');

	//print("%d\n", 5 / 0); // 0으로는 나눌 수 없다.



	/* 정수를 입력 받아서 해당 정수의 십의 자리와 일의 자리 출력하기
	* 
	* 입력 예시 : 10
	* 
	* 출력 예시 
	*		십의 자리 : 1
	*		일의 자리 : 0
	*/

	//int num = 0;
	//printf("숫자를 입력해주세요.");
	//scanf_s("%d", &num);

	//printf("해당 숫자의 십의 자리 수는 %d 입니다.\n",num/10);
	//printf("해당 숫자의 일의 자리 수는 %d 입니다.\n",num%10);

	/* 노래 한곡당 300원인 코인 노래방에서
	* 사용자에게 금액을 입력받고 , 부를 수 있는 노래와 잔돈 출력하기
	* 입력 예시 : 금액입력 >> 1600
	* 출력 예시 : 부를 수 있는 노래는 5곡이며, 잔돈은 100원 입니다.
	*/
	int money = 0;
	int sing = 300;
	printf("금액 입력 >> ");
	scanf_s("%d", &money);

	printf("부를 수 있는 노래는 %d곡 이며, 잔돈은 %d원 입니다.\n", money / sing, money % sing);


	/*사용자에게 영어 소문자를 입력받아서
	* 해당 소문자를 대문자로 바꾸어 출력하기
	* 입력예시 : a
	* 출력예시 : A
	*/

	char alphabet = NULL;
	printf("소문자 알파벳을 입력해주세요.");
	scanf_s(" %c", &alphabet);

	printf("대문자 알파벳 %c가 출력되었습니다.", (alphabet - 32));









}