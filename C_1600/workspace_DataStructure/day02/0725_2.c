#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>


	typedef struct Student {
		char name[30];
		int age;
	}Student;


	int main() {

		//Student s1 = { "������",20 };
		//Student s2 = { "ŷ����",30 };
		//Student s3 = { "����",40 };
		//����ü �迭
		Student ar[] = {
			{"������",20},
			{"ŷ����",30},
			{"����",40},
			{"����",40},
		};

		printf("%s\n", ar[1].name);

		// ����ü ������
		// �����ʹ� �������ε�, ����ü ������ �ּҰ��� ����ִ� ������
		Student jin = { "������",20 };
		Student* sptr = &jin; // ����ü ������
		/*
		printf("%p\n", jin);
		printf("jin�� �ּҰ� : %d\n", sptr);
		printf("jin�� �ּҰ� : %d\n", &jin);*/

		// ����ü ���� ��ü�� �ּҰ� �ƴϴ�.
		//*sptr : jin

		//����ü �����͸� ���� ������� �����ϱ�
		printf("%s\n", (*sptr).name);
		printf("%d\n", (*sptr).age);
		//�Ȱ���.
		printf("%d\n", sptr->age);
		printf("%s\n", sptr->name);



		return 0;
	}
