#include<stdio.h>

void main() {
	//printf("if문 위의 문장\n");

	//if (0) { // c언어는 true false 값이 없고 1참,0거짓으로 구분한다.
	//	printf("if안의 첫번째 문장\n");
	//	printf("if안의 두번째 문장\n");
	//}

	//printf("if문 아래 문장\n");
	// 
	
	// 
	//int num1;
	//printf("숫자를 입력해주세요.");
	//scanf("%d", &num1);

	//if (num1%2 == 0) {
	//	printf("짝수입니다.");
	//}
	//else if(num1%2!=0){
	//	printf("홀수입니다.");
	//}
	//else {
	//	printf("숫자를 입력해주세요");
	//}

	//정수 하나를 입력받아서 3의 배수인지 4의 배수인지 검사하는 프로그램을 만들어보자
	//둘다 아니라면 3의 배수, 4의 배수가 아닙니다 를 출력하기

	/*int num ;
	printf("숫자를 입력해주세요");
	scanf("%d", &num);

	if (num%3==0&&num%4==0) {
		printf("3의 배수이면서 4의 배수입니다.");
	}
	else if (num % 3 == 0) {
		printf("3의 배수입니다.");
	}
	else if (num % 4 == 0) {
		printf("4의 배수입니다.");
	}
	else {
		printf("3의배수, 4의배수가 아닙니다.");
	}*/

	//사용자에게 키와 나이를 입력받고
	//10살 이상, 160cm 둘 중 하나라도 이상이면 놀이기구 탑승 가능
	//아니면 탑승 불가능 출력하기

	//int age, height;
	//printf("나이를 입력해주세요.");
	//scanf("%d", &age);
	//printf("키를 입력해주세요.");
	//scanf("%d",&height);

	//if (age >= 10 && height >= 160) {
	//	printf("탑승 가능합니다.");
	//}
	////else if (age >= 10 || height >= 160) {
	////	printf("탑승 가능합니다.");
	////} 
	//else {
	//	printf("탑승 불가능합니다.");
	//}

	//int grade;
	//char result;
	//printf("점수를 입력해주세요.");
	//scanf("%d", &grade);
	//if (grade >= 90) {
	//	result = 'A';
	//}
	//else if (grade >= 80) {
	//	result = 'B';
	//}
	//else if (grade >= 70) {
	//	result = 'C';
	//}
	//else if (grade < 70) {
	//	result = 'F';
	//}
	//else {
	//	printf("숫자를 입력해주세요.");
	//}
	//printf("%c학점입니다.",result);
	// 
	
	 
	printf("숫자를 입력해주세요.");
	int num;
	scanf("%d", &num);
	switch (num%2)	{
	case 0:
		printf("짝수입니다.\n");
		break;
	case 1:
		printf("홀수입니다.\n");
		break;
	default:
		printf("숫자를 입력해주세요.\n");
		break;
	}

	//int score;
	//printf("점수를 입력해주세요.");
	//scanf("%d", &score);
	//switch (score/10){
	//	case 9:
	//		printf("A학점입니다.");
	//		break;
	//	case 8:
	//		printf("B학점입니다.");
	//		break;
	//	case 7:
	//		printf("C학점입니다.");
	//		break;
	//	default:
	//		printf("F학점입니다.");
	//		break;
	//}



}