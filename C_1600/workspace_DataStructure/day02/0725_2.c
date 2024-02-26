#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>


	typedef struct Student {
		char name[30];
		int age;
	}Student;


	int main() {

		//Student s1 = { "정현진",20 };
		//Student s2 = { "킹스맨",30 };
		//Student s3 = { "루피",40 };
		//구조체 배열
		Student ar[] = {
			{"정현진",20},
			{"킹스맨",30},
			{"루피",40},
			{"조로",40},
		};

		printf("%s\n", ar[1].name);

		// 구조체 포인터
		// 포인터는 포인터인데, 구조체 변수의 주소값을 담아주는 포인터
		Student jin = { "정현진",20 };
		Student* sptr = &jin; // 구조체 포인터
		/*
		printf("%p\n", jin);
		printf("jin의 주소값 : %d\n", sptr);
		printf("jin의 주소값 : %d\n", &jin);*/

		// 구조체 변수 자체는 주소가 아니다.
		//*sptr : jin

		//구조체 포인터를 통해 멤버변수 접근하기
		printf("%s\n", (*sptr).name);
		printf("%d\n", (*sptr).age);
		//똑같다.
		printf("%d\n", sptr->age);
		printf("%s\n", sptr->name);



		return 0;
	}
