#include<stdio.h>
#define PI 3.141592
#define STR "���� ���� ���\n"
#define END_MSG printf("���α׷� ����\n")
/*
struct student {
	char name[15];
	int phone;
	struct student* link; // �ڱ� ���� ����ü ������ ���� ����
};

int main(void) {
	struct student std1 = { "JUNG",010,NULL }; //--> 010 �ϸ� �������� �ν��Ѵ�.
	struct student std2 = { "LEE",20,NULL };
	struct student std3 = { "PARK",30,NULL };

	std1.link = &std2;
	std2.link = &std3;
	std3.link = &std1; // ����, ť �ڷᱸ������ �����

	printf("%s %d\n", std1.name, std1.phone);
	printf("%s %d\n", std1.link->name, std1.link->phone);
	printf("%s %d\n", std1.link->link->name, std1.link->link->phone);
*/

int main(void){
	printf("�������� 20�� ���� ������ --> %.5f\n", 10 * 10 * PI);
	printf(STR);
	END_MSG;






















	return 0;
}