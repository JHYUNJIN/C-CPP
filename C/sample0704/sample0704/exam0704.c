#include<stdio.h>
#include<string.h>

int main(void) {

	/*
		// ����ü�� �̸��� test�� ����(��������� ���� ����.)
		struct test {
			int a;
			float b;
			char c;
			char d[5];  // string.h
		};

		struct test t1; // ����ü ���� t1���� (��������� �Ҵ� ��)

		t1.a = 10;
		t1.b = 1.2f;
		t1.c = 'A';
		strcpy(t1.d, "ABCD"); //���ڿ��迭�� ������ĭ�� �������� ���ܳ��ƾ��Ѵ�.

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

		printf("�̸� : ");
		scanf_s("%s", name, 9); // �ִ� 9�ڸ� �Է� �� �� �ִ�.

		printf("�������� : ");
		scanf_s("%d", &kor);

		printf("�������� : ");
		scanf_s("%d", &eng);

		avg = (kor + eng) / 2.0f;

		printf("�л� �̸� --> %s\n", name);
		printf("���� ���� --> %d\n", kor);
		printf("���� ���� --> %d\n", eng);
		printf("��� ���� --> %.2f\n", avg);
	*/

	/*

		struct student {
			char name[10];
			int kor;
			int eng;
			float avg;
		};

		struct student std;

		printf("�̸� : ");
		scanf("%s", std.name, 9); // ������ �迭�� �ּҿ����ڰ� �ʿ����.
		printf("���� ���� : ");
		scanf("%d", &std.kor);
		printf("���� ���� : ");
		scanf("%d", &std.eng);

		std.avg = (std.kor + std.eng)/2.0f;

		printf("�л� �̸� --> %s\n", std.name);
		printf("���� ���� --> %d\n", std.kor);
		printf("���� ���� --> %d\n", std.eng);
		printf("��� ���� --> %.2f\n", std.avg);
	*/


		struct student {
		char name[10];
		int kor;
		int eng;
		float avg;
		};

		struct student std; // ����ü ���� ����
		struct student* p;	// ����ü ������ ���� p ����
		p = &std;

		printf("�̸� : ");
		scanf("%s", p->name);

		printf("���� ���� : ");
		scanf("%d", &p->kor);

		printf("���� ���� : ");
		scanf("%d", &p->eng);

		p->avg = (p->kor + p->eng) / 2.0f;

		printf("�л� �̸� --> %s\n", p->name);
		printf("���� ���� --> %d\n", p->kor);
		printf("���� ���� --> %d\n", p->eng);
		printf("��� ���� --> %.2f\n", p->avg);

























	return 0;
}