#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
// ����ü ����
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
	
	struct Student st1; // st1�̶�� �̸��� ���� ����ü ���� ����
	// ����ü ������ ������ ���� �����ϱ�. 
	//st1.name="hyunjin"; //
	//���ڿ��� ���� �����ϴ� �Լ� strcpy()�� string.h�� ���� �Ǿ��ִ�.

	strcpy(st1.name, "hyunjin");
	st1.kor = 90;
	st1.eng = 100;
	printf("�̸� : %s\n�������� : %d\n�������� : %d\n", st1.name,st1.kor,st1.eng);

	struct Student st2={"������",1000,1000};
	printf("�̸� : %s\n�������� : %d\n�������� : %d\n", st2.name,st2.kor,st2.eng);

	printf("����ü ���� ������ : %d\n", sizeof(st2)); //38�� �ƴ� 40�� ���� �������� �Ҵ�
	// ���������� �Ҵ������� ������ �ӵ��� �������� ������ c���� �ڵ����� ���������� Ȯ����Ŵ

	struct Korean k1;
	//�������� ���� ���𰡴�
	Kor k2;

	//���� ������ ����ü ���� ����
	// struct Person p1; // ���� ����� ��� �Ұ���
	Person p2;







	return 0;
}