#include<stdio.h>
#include<string.h> // 문자열 함수 사용 시 선언해야 한다.

/*
int main(void) {
	char ch;
	char* p;

	ch = 'A';
	p = &ch;

	printf("ch가 가지고 있는 값은 : %c\n", ch);
	printf("ch의 주소값은 : %x\n", &ch);
	printf("p가 가지고 있는 값은 : %x\n", p);
	printf("p가 가지고 있는 주소값은 : %x\n", &p);
	printf("p가 가리키는 곳의 실제 값은 : %c\n", ch);
	printf("p가 가리키는 곳의 실제 값은 : %c\n", *p); //*(*p)

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
	*q = 'Z'; // 역참조

	printf("ch가 가지고 있는 값은 : ch --> %c\n", ch);
	return 0;
}
*/

/*
int main(void) {
	int* pi;
	double* pd;
	char* pc;

	// 포인터의 크기
	printf("siezof(pi) = %d\n", sizeof(pi));
	printf("siezof(pd) = %d\n", sizeof(pd));
	printf("siezof(pc) = %d\n", sizeof(pc));

	//포인터형의 크기
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

	printf("p = %p\n", p); // a의 주소 출력
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
printf("문자열 배열의 str -->%s\n", str);

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
printf("역으로 출력하면 : %s\n", str2);
return 0;
}
*/

/*
int main(void) {
	char str[] = "ABC";
	int len; // 문자열의 길이값을 저장하는 변수

	len = strlen(str);
	printf("문자열의 길이는 : %d\n", len);
	return 0;
}
*/

/*
int main(void) {

	char str[4];
	strcpy(str,"ABC");
	printf("문자열의 내용은 : %s\n", str);

	char str1[8] = "ABC ";
	strcat(str1, "DEF");
	printf("결합된 문자열의 결과는 : %s\n", str1);

	return 0;
}
*/

int main(void) {
	char str1[] = "ABC";
	char str2[] = "ABc";
	int result=0;
	result = strcmp(str1, str2);
	printf("두 문자열의 비교결과는 : %d\n", result);

	return 0;

}



















