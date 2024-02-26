#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
// 구조체 정의
struct Student {
	char name[30];
	int kor;
	int eng;
}student;

typedef struct Korean {
	char name[30];
	int age;
}Kor;

typedef struct {
	char name[30];
	int age;
}Person;

int main() {
	
	struct Student st1; // st1이라는 이름을 가진 구조체 변수 선언
	// 구조체 내부의 변수에 값을 저장하기. 
	//st1.name="hyunjin"; //
	//문자열에 값을 대입하는 함수 strcpy()는 string.h에 정의 되어있다.

	strcpy(st1.name, "hyunjin");
	st1.kor = 90;
	st1.eng = 100;
	printf("이름 : %s\n국어점수 : %d\n영어점수 : %d\n", st1.name,st1.kor,st1.eng);

	struct Student st2={"정현진",1000,1000};
	printf("이름 : %s\n국어점수 : %d\n영어점수 : %d\n", st2.name,st2.kor,st2.eng);

	printf("구조체 변수 사이즈 : %d\n", sizeof(st2)); //38이 아닌 40인 이유 여유공간 할당
	// 여유공간을 할당해주지 않으면 속도가 느려지기 때문에 c에서 자동으로 여유공간을 확보시킴

	struct Korean k1;
	//별명으로 변수 선언가능
	Kor k2;

	//별명만 설정한 구조체 변수 선언
	// struct Person p1; // 기존 방식은 사용 불가능
	Person p2;







	return 0;
}