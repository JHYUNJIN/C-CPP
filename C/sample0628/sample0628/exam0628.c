#include<stdio.h>
/*
int main(void) {
	int num = 99;

	if(num > 100) {
		printf("참입니다.\n");
	}
	else {
		printf("거짓입니다.");
	}
	return 0;
}
*/

/*
// 사용자가 직접 정수를 입력하여 입력한 정수가 짝수인지 홀수인지 출력하는 함수
int main(void) {
	int num = 0; // 정수형 변수를 선언하고 int 0으로 초기화 함
	printf("숫자를 입력해주세요 : ");
	scanf("%d", &num);
	
	if (num % 2 == 0) {
		printf("짝수입니다.");

	}
	else {
		printf("홀수입니다.");
		
	}
	return 0;
}
*/

/*
int main(void) {
	int num = 0;
	printf("점수를 입력해주세요 : ");
	scanf("%d", &num);
	if (num >= 90) {
		printf("A");
	}
	else if (num >= 80) {
		printf("B");
	}
	else if (num >= 70) {
		printf("C");
	}
	else if (num >= 60) {
		printf("D");
	}
	else {
		printf("F");
	}
return 0;
}
*/


/*
// 단순 if문을 이용하여 두 수의 + - * / 를 구하는 소스를 코딩하시오.
// 단, 사용자가 직접 입력하게 한다.
// 출력 예) 첫번째 숫자를 입력하세요. : 10
//          계산할 연산자(+ - * /)를 입력해 주세요 : *
//          두번째 정수를 입력해 주세요 : 2
//           10 * 2 = 20입니다.

int main(void) {
	int num1=0,num2=0;
	int total = num1 * num2;
	char ch = ' ';

	printf("첫번째 숫자를 입력하세요 : ");
	scanf("%d", &num1);
	printf("계산할 연산자를 입력하세요 : ");
	scanf(" %c", &ch);
	printf("두번째 숫자를 입력하세요 : ");
	scanf("%d", &num2);
	if (ch=='+') {
		printf("%d+%d=%d입니다.",num1, num2,num1+num2);
	}
	if (ch == '-') {
		printf("%d-%d=%d입니다.", num1, num2, num1 - num2);
	}
	if (ch == '*') {
		printf("%d*%d=%d입니다.", num1, num2, num1 * num2);
	}
	if (ch == '/') {
		printf("%d/%d=%d입니다.", num1, num2, num1 / num2);
	}

return 0;
}
*/

/* switch
int main(void) {
	int num = 0;
	
	printf("1번부터 4번 중 하나를 선택하시오.");
	scanf("%d", &num);

	switch (num){
	case 1:
		printf("1번을 선택하였습니다.\n");
		break;
	case 2:
		printf("2번을 선택하였습니다.\n");
		break;
	case 3:
		printf("3번을 선택하였습니다.\n");
		break;
	case 4:
		printf("4번을 선택하였습니다.\n");
		break;

	default:
		printf("잘못눌렀쪙>.-");
	}
	return 0;
}
*/

/*
int main(void) {
	int i = 0;
	for (i = 0; i < 5; i++){
		printf("C-Programming\n");
	}
	for (i = 5; i > 0; i--){
		printf("%d번째 반복 C-Programming\n",i);
	}
	return 0;
}
*/

// 미완성 for문
/*
int main(void) {
	int sum = 0;

	int i = 0;
	for (i = 0; i < 10; i++) {
		if (i == 0) {
			printf("1부터2까지의 합부터 출력하겠습니다.\n");
		}
		else {
		sum += i+1;
		printf("%d부터 %d까지의 합은 : %d\n",1,i+1, sum);
		}
	}

	return 0;
}
*/

/*
int main(void) {
	int sum = 0;
	int i = 0;
	for (i = 500; i < 1000; i += 2) {
		sum = sum +1 + i;
	}

	printf("500에서 1000까지 홀수의 합은 : %d", sum);

	return 0;
}
*/

/*
int main(void) {
	int sum = 0;
	int i = 0, num = 0;

	printf("값을 입력하세요 : ");
		scanf("%d", &num);

		for (i = 0; i < num; i++) {
			sum = sum+1+ i;
		}
		printf("1부터 %d까지의 합은 : %d입니다.\n", num, sum);
		return 0;
}
*/

int main(void) {
	int i = 0;
	int dan = 0;
	printf("원하는 구구단을 입력하세요 : ");
		scanf("%d", &dan);

		for (i = 1; i <= 9; i++) {
			
			printf("%d x %d=%d\n", dan, i, dan * i);
		}
		return 0;
}























