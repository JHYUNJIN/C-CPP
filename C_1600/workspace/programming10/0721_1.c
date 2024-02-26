#include<stdio.h>


//함수의 선언과 정의를 동시에 진행
// 매개변수와 리턴이 둘 다 있는 함수의 정의
//리턴이 있을 경우, 리턴값의 타입을 가장 앞에 적어준다.
int add(int a, int b) {
	return a+b;
}

//리턴 타입이 없을 때는 void를 적어놓는다. 리턴타입이 없으면 값으로 활용 할 수 없다.
void printName(int cnt, char* name); // 함수의 선언  // char* name == char name[]

//[실습]
//사용자에게 정수를 입력받아 해당 정수가
//짝수인지 홀수인지 판별하는 함수
//짝수이면 1 홀수이면 0 리턴
//메인함수에서 테스트

int oddEven(int num);



int main() {

	//매개변수가 2개 있는 형태로 정의를 해 놓았기 때문에
	//매개변수를 넘겨주지 않으면 오류가 발생한다.
	//add();

	//리턴이 있으면 함수 사용 부분 전체를 리턴 값으로 봐야하다.
	//int result = add(1, 2);
	//printf("%d\n", result);

	//result = add(10,2);
	//printf("%d\n", result);

	//printName(3, "정현진");
	
	int a = oddEven(3);

	if (a){
			printf("홀수입니다.");
	}
	else{
			printf("짝수입니다.");
	}

	return 0;
	}

	void printName(int cnt, char name[]) {
		for (int i = 0; i < cnt; i++)	{
			printf("%s\n", name);
		}
}


	int oddEven(int num) {
		if (num % 2 == 0) {
			return  0;
		}
		else {
			return 1;
		}
	}
