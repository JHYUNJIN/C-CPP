#include<stdio.h>
	/*
	int main(void) {

		int num1=0, num2=0; // 변수가 선언되는 동시에 메모리(주소)에 할당
		int result=0; // 결과값을 넣을 수 있는 변수 선언

		num1 = 10;
		num2 = 0;

		result = num1 + num2;
		printf("%d+%d=%d\n", num1, num2, result);

		result = num1 - num2;
		printf("정수 %d에서 %d를 빼면 결과는 %d입니다.", num1, num2, result);

		result = num1 / num2;
		printf("정수 %d에서 %d를 나누면 결과는 %d입니다.", num1, num2, result);

	return 0;
	}
	*/

/*
	int main(void) {
		int num1=0, num2 = 0;
		int result = 0;

		printf("숫자를 입력해주세요 : ");
		scanf("%d", &num1);

		printf("숫자를 입력해주세요 : ");
		scanf("%d", &num2);
		// & 는 주소를 알아내는 키워드이다.

		result = num1 + num2;
		printf(" % d + % d = % d", num1, num2, result);
	
		return 0;
		}
*/

/*
int main(void) {
	printf("%d\n", 123);
	printf("%5d\n", 123);
	printf("%05d\n", 123);

	printf("%f\n", 123.45);
	printf("%7.1f\n", 123.45);

	return 0;
	}
*/

/*
int main(void) {
	int a=0, b = 0, c = 0;

	b = 5;
	c = 3;

	a = b + c;
	printf("%d+%d=%d\n", b, c, a);

	a = b / c;
	printf("%d/%d=%d\n", b, c, a);

	a = b & c;
	printf("%d%%%d=%d", b, c, a);
}
*/

/*
int main(void) {
	int a = 0;

	a++; // a=a+1
	printf("a++=%d\n", a); 
	a--;
	printf("a--=%d\n", a);

	return 0;
	}
*/


int main(void) {
	int a = 10, b=0;
	b = a++;  // --> b=a ++ 
	printf("%d\n", b);

	b = ++a; // --> ++a = b
	printf("%d\n", b);

	return 0;
}


/*
int main(void) {
	int a = 100, b = 200;
	printf("%d==%d는 %d이다.\n", a, b, a == b); // 거짓 0
	printf("%d!=%d는 %d이다.\n", a, b, a != b); // 참 1
}
*/

/*
int main(void) {
	int a = 99;

	printf("AND 연산 : %d\n", (a >= 100) && (a <= 200)); // 0
	printf("OR 연산 : %d\n", (a >= 100) || (a <= 200)); // 1
	printf("OR 연산 : %d\n", !(a == 100)); // 1
}
*/



