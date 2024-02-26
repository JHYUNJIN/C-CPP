#include<stdio.h>

int main(void) {
	int i;
	for (i = 0; i < 3; i++) {
		int num = 0;
		num++;
		printf("%d번째 반복, 지역변수 num은 %d\n", i + 1, num);
	}
	// 1번째 num은 1, 2번째 num은 1, 3번째 num은 1 

	if (i == 3) {
		int num = 7;
		num++;
		printf("if문 안에 존재하는 지역변수 num은 %d\n", num);
	}
	// num=8

	return 0;
}