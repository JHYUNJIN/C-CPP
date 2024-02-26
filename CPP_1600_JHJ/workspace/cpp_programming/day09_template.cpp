#define _CRT_SECURE_NOWARNINGS
#include<iostream>

using namespace std;

int sum1(int num1, int num2) {
	return num1 + num2;
}

template<class T>
T sum2(T num1, T num2) {
	return num1 + num2;
}

void printData1(string a, int b, double c) {
	cout << "=====printData1 실행=====" << endl;
	cout << "a : " << a << endl;
	cout << "b : " << b << endl;
	cout << "c : " << c << endl;
	cout << "=====printData1 종료=====" << endl;
}

template<class T1, class T2, class T3>
void printData2(T1 a, T2 b, T3 c) {
	cout << "=====printData2 실행=====" << endl;
	cout << "a : " << a << endl;
	cout << "b : " << b << endl;
	cout << "c : " << c << endl;
	cout << "=====printData2 종료=====" << endl;
}


int main() {

	cout << sum1(1, 19) << endl;

	//소수점은 자르고 더해주네 ?
	//cout << sum1(1.7, 19.8) << endl;
	//templete을 사용하면 제대로 더해줄 수 있다.
	cout << sum2(1.7, 19.8) << endl;



	//문자열을 다이렉트로 전달하면 string타입으로 인식하지 않고
	//포인터로 인식하기 때문에 +연산이 작동하지 않는다.
	//cout << sum2("금요일", "월요일")<<endl;
	//cout << "금요일"+ "월요일"<<endl;


	//string 클래스 안에서 + 연산자가 오버로딩 되어있기 때문에 가능하다.
	string data1 = "금";
	string data2 = "요일";
	cout << data1 + data2 << endl;
	cout << sum2(data1, data2) << endl;
	cout << sum2<string>(data1, data2) << endl;

	//sum2매개변수 모두 같은 타입일 때 사용가능하다.
	//cout << sum2(data2 + 1) << endl;
	//문자열 + 정수 불가능하다.
	//cout << data1 + 3 << endl;
	//
	cout << 1.2 + 3 << endl; // 이건 실수형으로 잘 더해주네
	printData1("정현진", 22, 177.7);
	printData2("정현진", 23, 12.5);

	//함수를 사용할 때 템플릿에 들어갈 자료형을 우리가 설정할 수 있다.
	//즉, 함수를 호출할 때 타입을 강제할 수 있다.
	printData2<string, int, double>("정현진", 12, 12.3);

	//템플릿 함수이지만, 함수를 호출하는 부분에 타입을 강제했기때문에
	//타입이 맞지 않는다면 실행되지 않는다.
	//printData2<string, int, double>(12, "정현진", 12.3);









	
	return 0;
}