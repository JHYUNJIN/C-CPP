#include<stdio.h>
#include<string.h> // ���ڿ� �Լ� ��� �� �����ؾ� �Ѵ�.

/*
int main(void) {
	char ch;
	char* p;

	ch = 'A';
	p = &ch;

	printf("ch�� ������ �ִ� ���� : %c\n", ch);
	printf("ch�� �ּҰ��� : %x\n", &ch);
	printf("p�� ������ �ִ� ���� : %x\n", p);
	printf("p�� ������ �ִ� �ּҰ��� : %x\n", &p);
	printf("p�� ����Ű�� ���� ���� ���� : %c\n", ch);
	printf("p�� ����Ű�� ���� ���� ���� : %c\n", *p); //*(*p)

	return 0;
}
*/

/*
int main(void) {
	int a, b;
	char ch;
	char* p, * q;

	ch = 'A';  
	p = &ch; // A

	q = p; // p
	*q = 'Z'; // ������

	printf("ch�� ������ �ִ� ���� : ch --> %c\n", ch);
	return 0;
}
*/

/*
int main(void) {
	int* pi;
	double* pd;
	char* pc;

	// �������� ũ��
	printf("siezof(pi) = %d\n", sizeof(pi));
	printf("siezof(pd) = %d\n", sizeof(pd));
	printf("siezof(pc) = %d\n", sizeof(pc));

	//���������� ũ��
	printf("siezof(int*) = %d\n", sizeof(int*));
	printf("siezof(double*) = %d\n", sizeof(double*));
	printf("siezof(char*) = %d\n", sizeof(char*));
}
*/

/*
int main(void) {

	int a = 10;
	int* p = &a;
	int* q = NULL;
	int* r = 0;

	printf("p = %p\n", p); // a�� �ּ� ���
	printf("q = %p\n", q);
	printf("r = %p\n", r);

	const int* p;
	int const p;
	const int* const p;

	char ch[3] = "abc";

	return 0;
}
*/

/*
int main(void) {

char str[10] = "C-Program";
str[3] = "^";
int i = 0;


for (int i = 0; i < 9; i++) {
	printf("str[%d] --> %c\n",i,str[i]);
	}
printf("���ڿ� �迭�� str -->%s\n", str);

return 0;
}
*/

/*
int main(void) {
char str1[5] = "abcd";
char str2[5];
int i;
for (i = 0; i < 4; i++) {
	str2[i] = str1[3-i];
}
str2[0] = str1[3];
str2[4] = '\0';
printf("������ ����ϸ� : %s\n", str2);
return 0;
}
*/

/*
int main(void) {
	char str[] = "ABC";
	int len; // ���ڿ��� ���̰��� �����ϴ� ����

	len = strlen(str);
	printf("���ڿ��� ���̴� : %d\n", len);
	return 0;
}
*/

/*
int main(void) {

	char str[4];
	strcpy(str,"ABC");
	printf("���ڿ��� ������ : %s\n", str);

	char str1[8] = "ABC ";
	strcat(str1, "DEF");
	printf("���յ� ���ڿ��� ����� : %s\n", str1);

	return 0;
}
*/

int main(void) {
	char str1[] = "ABC";
	char str2[] = "ABc";
	int result=0;
	result = strcmp(str1, str2);
	printf("�� ���ڿ��� �񱳰���� : %d\n", result);

	return 0;

}



















