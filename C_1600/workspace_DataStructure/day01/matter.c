#include<stdio.h>

int multiple_7(int num) {
	int count = 0;
	for (int i = num; i <= num+200; i++){
		if (i % 7 == 0) {
			count++;
		}
	}
	return count;
}

float height(float num) {
	float height;
	height = num / 100;

	return height;
}

int stop_watch(int num) {
	int hour, minute, second;
	
	minute = num / 60;
	hour = minute / 60;
	minute = minute % 60;
	second = num % 60;
	int time[3] = { hour,minute,second };

	return *time ;

	/*
	주소연산자는 배열을 받아올 수 없다.
	배열의 첫번째방을 리턴해주더라도 중괄호 영역이 끝나면서 다음방이 사라져버리기 때문에
	main함수에서 다음방을 찾을 수 없었던것이다.
	*/


}









void main() {

	//int num,result;
	//printf("정수를 입력해주세요.");
	//scanf_s("%d",&num);

	//result=multiple_7(num);
	//printf("%d", result);


	//int num;
	//float result;
	//printf("키를 cm단위로 입력해주세요.");
	//scanf_s("%d", &num);

	//result=height(num);
	//printf("%.2f m", result);


	//int num, hour, minute, second;
	//
	//printf("몇 초 : ");
	//scanf_s("%d", &num);
	//minute = num / 60;
	//hour = minute / 60;
	//minute = minute % 60;
	//second = num % 60;

	//printf("%d시/%d분/%d초", hour, minute, second);

	int num;
	int* result[3];

	printf("몇 초 : ");
	scanf_s("%d", &num);
	*result = stop_watch(num);
	
	printf("%d시간/%d분/%d초", result[0], result[1], *(result+2));


}