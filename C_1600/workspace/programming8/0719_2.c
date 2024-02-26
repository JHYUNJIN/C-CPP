#include<stdio.h>
#include<string.h>

void main() {
	//strcmp(문자열1,문자열2);
	//문자열1과 문자열2가 같다면 0
	//문자열1이 문자열2보다 아스키코드값이 작다면 -1
	//문자열1이 문자열2보다 아스키코드값이 크다면 1
	printf("%d\n", strcmp("banana","apple"));
	printf("%d\n", strcmp("apple", "apple"));
	printf("%d\n", strcmp("apple", "banana"));
	printf("%d\n", strcmp("aaa","aa"));
	printf("%d\n", strcmp("aa","aa"));
	printf("%d\n", strcmp("aa","aaa"));

	//strcat(변수명,문자열 값)
	// 해당 변수에 들어있는 문자열과 뒤에 전달해준 문자열을 연결해서 저장해준다.
	char target[10] = "hi";
	strcat(target, "bye");
	printf("결과 : %s\n", target);



	char str1[] = "hyunjin";
	//str1 = "is so cool";
	//strcpy(바꿔줄 변수, 바꿀 문자열 값); 문자열 값을 변경시켜준다.
	printf(str1);
	strcpy(str1, " so cool");
	printf(str1);




} //main