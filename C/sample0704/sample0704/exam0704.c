#include<stdio.h>
#include<string.h>

int main(void) {

	/*
		// 구조체형 이름인 test를 선언(저장공간이 아직 없다.)
		struct test {
			int a;
			float b;
			char c;
			char d[5];  // string.h
		};

		struct test t1; // 구조체 변수 t1선언 (저장공간이 할당 됨)

		t1.a = 10;
		t1.b = 1.2f;
		t1.c = 'A';
		strcpy(t1.d, "ABCD"); //문자열배열의 마지막칸은 공백으로 남겨놓아야한다.

		printf("t1.a --> %d\n", t1.a);
		printf("t1.b --> %.2f\n", t1.b);
		printf("t1.c --> %c\n", t1.c);
		printf("t1.d --> %s\n", t1.d);
	*/

	/*
		char name[10];
		int kor;
		int eng;
		float avg;

		printf("이름 : ");
		scanf_s("%s", name, 9); // 최대 9자를 입력 할 수 있다.

		printf("국어점수 : ");
		scanf_s("%d", &kor);

		printf("영어점수 : ");
		scanf_s("%d", &eng);

		avg = (kor + eng) / 2.0f;

		printf("학생 이름 --> %s\n", name);
		printf("국어 점수 --> %d\n", kor);
		printf("영어 점수 --> %d\n", eng);
		printf("평균 점수 --> %.2f\n", avg);
	*/

	/*

		struct student {
			char name[10];
			int kor;
			int eng;
			float avg;
		};

		struct student std;

		printf("이름 : ");
		scanf("%s", std.name, 9); // 문자형 배열은 주소연산자가 필요없다.
		printf("국어 점수 : ");
		scanf("%d", &std.kor);
		printf("영어 점수 : ");
		scanf("%d", &std.eng);

		std.avg = (std.kor + std.eng)/2.0f;

		printf("학생 이름 --> %s\n", std.name);
		printf("국어 점수 --> %d\n", std.kor);
		printf("영어 점수 --> %d\n", std.eng);
		printf("평균 점수 --> %.2f\n", std.avg);
	*/


		struct student {
		char name[10];
		int kor;
		int eng;
		float avg;
		};

		struct student std; // 구조체 변수 선언
		struct student* p;	// 구조체 포인터 변수 p 선언
		p = &std;

		printf("이름 : ");
		scanf("%s", p->name);

		printf("국어 점수 : ");
		scanf("%d", &p->kor);

		printf("영어 점수 : ");
		scanf("%d", &p->eng);

		p->avg = (p->kor + p->eng) / 2.0f;

		printf("학생 이름 --> %s\n", p->name);
		printf("국어 점수 --> %d\n", p->kor);
		printf("영어 점수 --> %d\n", p->eng);
		printf("평균 점수 --> %.2f\n", p->avg);

























	return 0;
}