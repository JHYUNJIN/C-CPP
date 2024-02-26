#include<stdio.h>

int global;
void f() {
	// 스태틱 변수
	//사용가능한 영역은 지역변수와 동일하지만
	// 메모리에서의 해제는 프로그램이 종료된 이후에 해제된다.
	static int a = 0;
	int b = 0;
	a++;
	b++;
	printf("a : %d\tb : %d\n", a, b);
}

void f2() {
	printf("전역변수 global : %d\n", global);
}
void f3(int num) {
	//num = 100;
	printf("전역변수 global : %d\n", global);
	printf("매개변수 num : %d\n", num);
}


void main() {

	f();
	f();
	printf("\n");
	f2();
	printf("\n");
	global = 500;
	printf("\n");
	printf("전역변수 global : %d\n", global);

	printf("\n");

	int num = 10;
	f3(200);
	printf("main 내부의 num의 값 : %d\n", num);


}