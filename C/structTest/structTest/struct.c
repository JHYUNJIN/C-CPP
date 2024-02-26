#include<stdio.h>
#define PI 3.141592
#define STR "원의 면적 계산\n"
#define END_MSG printf("프로그램 종료\n")
/*
struct student {
	char name[15];
	int phone;
	struct student* link; // 자기 참조 구조체 포인터 변수 선언
};

int main(void) {
	struct student std1 = { "JUNG",010,NULL }; //--> 010 하면 이진수로 인식한다.
	struct student std2 = { "LEE",20,NULL };
	struct student std3 = { "PARK",30,NULL };

	std1.link = &std2;
	std2.link = &std3;
	std3.link = &std1; // 스택, 큐 자료구조에서 사용함

	printf("%s %d\n", std1.name, std1.phone);
	printf("%s %d\n", std1.link->name, std1.link->phone);
	printf("%s %d\n", std1.link->link->name, std1.link->link->phone);
*/

int main(void){
	printf("반지름이 20인 원의 면적은 --> %.5f\n", 10 * 10 * PI);
	printf(STR);
	END_MSG;






















	return 0;
}