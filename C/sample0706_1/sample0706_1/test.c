#include<stdio.h>
#include"myHeader.h" // 사용자 정의 헤더 파일 추가

void func(int num) {
	printf("%d\n", num);
}

int main(void) {
	func(10);
}